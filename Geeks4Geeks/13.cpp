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
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max = arr[n-1];
    for (int i = n-1; i >= 0; i--)
    {
        if(arr[i]>max)
        {
            max = arr[i];
            cout<<max<<' ';
        }
    }
    cout<<arr[n-1]<<endl;
        

}
