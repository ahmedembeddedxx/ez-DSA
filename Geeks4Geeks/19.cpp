#include <iostream>
#include <algorithm>
using namespace std;


void showArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

int main()
{
    int arr[] = {0, 1, 2, 6, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = 10;

    int start = 0;
    int end = n-1;



    while(start<end)
    {
        if(start!=arr[start])
        {
            cout<<start<<endl;
            break;
        }

        int mid = arr[(start+end)/2];

        if(mid<(m/2))
            start = mid+1;
        else
            end = mid;
    }

    showArray(arr, n);
        

}
