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
    int arr[] = {1, 2, 2, 4, 1, 2, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);


    for (int i = 0; i < n; i++)
    {
        bool isFound = false;
        for (int j = i - 1; j >= 0; j--)
        {
            if(arr[i] == arr[j])
            {
                isFound = true;
                break;
            }
        }
        if(!isFound)
            cout<<arr[i]<<endl;
    }
    

}
