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
    int arr[] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    showArray(arr, n);

    cout<<endl;
    
    for (size_t i = 0; i < n; i++)
        for (int u = 0; u < n; u++)
        {
            int real_pos = arr[i];
            if(real_pos != u && arr[i]!= -1)
                swap(arr[real_pos], arr[i]);
        }
    for (int i = 0; i < n; i++)
        if (arr[i] != i)
            arr[i] = -1;
    



    showArray(arr, n);
        

}
