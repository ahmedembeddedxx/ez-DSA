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
    int arr[] = {50, 40, 70, 60, 90};
    int index[] = {3,  0,  4,  1,  2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int temp[] = {0, 0, 0};

    for (int i = 0; i < n; i++)
        temp[i] = arr[index[i]];
    

    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
    


    showArray(arr, n);
        

}
