#include <iostream>
#include <set>
#include <list>
#include <vector>
using namespace std;

vector<int> two_sum(int arr[], int n, int x)
{
    vector<int> res;
    res.push_back(-1);
    res.push_back(-1);
    if(n<2)
        return res;

    set<int> hashed;

    for (int i = 0; i < n; i++)
        hashed.insert(arr[i]);


    for (int i = 0; i < n; i++)
    {
        int a = arr[i];
        int b = x - a;

        if(hashed.find(b) != hashed.end())
        {
            res.pop_back();
            res.pop_back();
            res.push_back(a);
            res.push_back(b);
            return res;
        }
    }

    return res;


}



int main()
{
    int arr1[] = { 11, 1, 13, 21, 3, 7 };
    int m = sizeof(arr1) / sizeof(arr1[0]);
    vector<int> res = two_sum(arr1, m, 24);

    cout<<res[0]<<endl<<res[1]<<endl;
    return 0;
}