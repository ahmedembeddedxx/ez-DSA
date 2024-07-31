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
    const int n = 9;
    int arr[n] = {7, 2, 9, 4, 6, 1, 3, 8, 5};

    int temp[n] = {0};
    for (int i = 0; i < n; i++)
        temp[i] = arr[i];

    bool isEven = true;
    int ctr = 0;
    for (int i = 0; i < n; i++)
    {
        
        if(isEven)
        {
            if(temp[i] % 2 == 0)
                arr[ctr++] = temp[i];
        }
        else
        {
            if(temp[i] % 2 == 1)
                arr[ctr++] = temp[i];
        }
        if(i==n-1 && isEven)
        {
            i = -1;
            isEven = false;
        }
    }
    
    
    showArray(arr, n);

    


}
