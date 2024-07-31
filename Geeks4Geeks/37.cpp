#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;


int* sumfunc(int arr[], int N, int sum)
{
    int* indexes = new int[2];

    int type_sum = 0;
    int l = 0, r = 0;
    
    type_sum = arr[r];

    while (l<=r && r<N && type_sum!=sum)
    {
        if(type_sum<sum)
        {
            r++;
            type_sum+=arr[r];
        }
        else
        {
            type_sum-=arr[l];
            l++;
        }
    }
    
    indexes[0] = l;
    indexes[1] = r;

    return indexes;
}


int main()
{   

    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);

    int* res = sumfunc(arr, size, 12);

    cout<<res[0]<<endl<<res[1]<<endl;

}
