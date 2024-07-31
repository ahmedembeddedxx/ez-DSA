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
    int arr[] = {10, 21, 22, 100, 101, 200, 300};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ctr = 0;
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            for (int k = j; k < n; k++)
                if(i!=j && j!=k && i!=k)
                {
                    int a = arr[i];
                    int b = arr[j];
                    int c = arr[k];

                    if(a+b>c && a+c>b && b+c>a)
                        ctr++;
                }

    cout<<ctr<<endl;


}
