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
    int arr[] = {10, 7, 9, 2, 8, 3, 5, 4, 6, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    

    for (int i = 0; i < n;)
    {
        int temp = arr[i] - 1;
        if(arr[temp] != arr[i])
            swap(arr[temp], arr[i]);
        else
        {
            i++;
        }
    }


    showArray(arr, n);

}
