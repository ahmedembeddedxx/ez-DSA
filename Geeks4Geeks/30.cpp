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

    int x=20, l=1, r=3;

    if(l>=r || r>=n || l>=n)
    {
        showArray(arr, n);
        return 0;
    }

    for (size_t i = l; i <= r; i++)
        arr[i]+=x;
    


    showArray(arr, n);
        

}
