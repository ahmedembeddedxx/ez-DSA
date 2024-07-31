#include <iostream>
#include <cmath>
using namespace std;


void showArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<' ';
    }
}

int main()
{
    const int n = 6;

    int arr[] = {10, 4, 3, 50, 23, 90};

    int v1 = INT_MIN, v2 = INT_MIN;

    for (int i = 0; i<n; i++)
    {
        if (arr[i]>v1)
        {
            swap(v1, v2);
            v1 = arr[i];
        }
        else if(arr[i]>v2)
            v2 = arr[i];
    }

    cout<<"Second Largest: "<<v2<<endl;


}
