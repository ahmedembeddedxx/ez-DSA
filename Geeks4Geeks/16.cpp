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
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    showArray(arr, n);

    cout<<endl;

    int ctr = 0;
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0)
            swap(arr[i], arr[ctr++]);
    }

    int ctr_pos = ctr;
    int ctr_neg = n - ctr;

    
    int odd_ctr = 1;
    for (int i = n - 1; i >= n - ctr_neg && i>n/2; i--)
    {
        swap(arr[i], arr[odd_ctr]);
        odd_ctr+=2;
    }

    showArray(arr, n);
        

}
