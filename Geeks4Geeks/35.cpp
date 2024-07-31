#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;


int min__coins(int sum)
{
    int arr[] = {5, 2, 1};
    int size = 3;
    int res = 0;
    int coins = 0;
    int c = 0;


    while (res!=sum)
    {
        if(res+arr[c] <= sum)
        {
            res+=arr[c];
            cout<<arr[c]<<' ';
            coins++;
        }
        else
            c++;
    }

    cout<<endl;
    return coins;
}



int main()
{   

    cout<<min__coins(18)<<endl;

}
