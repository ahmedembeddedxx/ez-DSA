#include <iostream>
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
    int n = 4;
    int arr[] = { 1, 2, 2, 1 };

    for (int i = 1; i < n; i++)
        if (!((arr[i] >= arr[i - 1]) && i%2 == 0 || (arr[i] <= arr[i - 1]) && i%2 != 0))
            swap(arr[i], arr[i-1]);            


    showArray(arr, n);


}
