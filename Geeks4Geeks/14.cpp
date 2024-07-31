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
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 33;
    

    for (int i = 0; i < n; i++)
    {
        int summed = 0;
        for (int j = i; j < n; j++)
        {
            summed+=arr[j];
            if(summed == sum)
            {
                for (int k = i; k <= j; k++)
                    cout<<arr[k]<<' ';
                cout<<endl;
            }
        }
    }
    
        

}
