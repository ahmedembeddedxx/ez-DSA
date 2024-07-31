#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

const int size = 5;
int countzeros(int (&arr)[7], int s, int e)
{
    int count0 = 0;
    for (int i = s; i <= e; i++)
    {
        if(arr[i]==0)
            count0++;
    }
    return count0;
}

int get_max_window(int (&arr)[7], int size)
{
    int count_1s = 0;
    int count_0s = 0;

    
    int left = 0, right = size - 1;
    count_0s = countzeros(arr, left, right);
    
    while(countzeros(arr, left, right) >= 2 && left<right)
    {
        int last_count = countzeros(arr, left, right);
        if(countzeros(arr, left, right - 1)<last_count)
        {
            right--;
        }
        else if(countzeros(arr, left + 1, right)<last_count)
        {
            left++;
        }
    }
    

    return right - left + 1;

}



int main()
{
    int arr[7] = {1,0,1,1,1,1,0};
    int s = sizeof(arr)/sizeof(arr[0]);

    int res = get_max_window(arr, s);

    cout<<res<<endl;
}
