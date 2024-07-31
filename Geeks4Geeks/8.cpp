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

    int d = 1;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[(i+d) % n]<<' ';
    }
    



}
