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
    const int n = 7;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7};
    int temp[n] = {0};
    
    for(int i = 0; i < n; i++)
        temp[i] = arr[i];

    int ctr = 0;
    for (int i = 0, j = n - 1; i <= j; i+=1, j-=1)
    {
        arr[ctr] = temp[j];
        if(ctr + 1 < n)
            arr[ctr + 1] = temp[i];
        ctr += 2;
    }
    

    showArray(arr, n);

    


}
