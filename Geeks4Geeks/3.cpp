#include <iostream>
#include <cmath>
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
    const int n = 8;

    int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
    cout<<"Before: ";
    showArray(arr, 8);

    int zero_counts = 0;
    int ctr = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {   
            arr[ctr++] = arr[i];
            zero_counts++;
        }
    }

    for (int i = ctr; i < ctr + zero_counts; i++)
    {
        arr[i] = 0;
    }
    

    cout<<"After:  ";
    showArray(arr, 8);


}
