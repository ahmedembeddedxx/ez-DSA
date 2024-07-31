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

    int i;
    for (i = 0; i < n; i++)
    {
        if(arr[i]!=i && i<=m)
            break;
    }
    
    cout<<arr[i-1]+1<<endl;



    
    


    showArray(arr, n);
        

}
