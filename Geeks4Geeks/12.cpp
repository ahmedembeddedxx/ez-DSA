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
    int arr[] = { 2, 3, 5, 4, 5, 3, 4 };
    int n = sizeof(arr)/sizeof(arr[0]);

    int xored = arr[0];
    for (int i = 1; i < n; i++)
    {
        xored = xored^arr[i];
    }

    cout<<xored<<endl;
    

}
