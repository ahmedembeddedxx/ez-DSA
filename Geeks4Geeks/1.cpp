#include <iostream>
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

    int v1 = INT_MIN, v2 = INT_MIN, v3 = INT_MIN;

    if (n<3)
    {    
        cout<<"Invalid Computation\n";
        return 0;
    }

    for (int i = 0; i<n; i++)
    {
        if (arr[i]>v1)
        {
            int temp1 = v1;
            v1 = arr[i];
            int temp2 = v2;
            v2 = temp1;
            v3 = temp2;
        }
        else if(arr[i] > v2)
        {
            int temp1 = v2;
            v2 = arr[i];
            v3 = temp1;
        }
        else if(arr[i]>v3)
        {
            v3 = arr[i];
        }
    }

    cout<<v1<<' '<<v2<<' '<<v3<<endl;

}
