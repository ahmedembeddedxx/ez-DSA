#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;


int get_max_window(int (&arr)[7], int size)
{
    int ctr = 0;
    int s = 0;
    int e = 0;

    // if(arr[s] == 1)
    //     ctr += 1;

    for (int i = 0; i < size && e < size; i++, e++)
    {
        if(e - s > ctr && arr[e] == 0)
        {
            ctr = e - s;
            s = e;
        }
    }
    
    return ctr - 1;

}



int main()
{
    int arr[7] = {1,0,1,1,1,1,0};
    int s = sizeof(arr)/sizeof(arr[0]);

    int res = get_max_window(arr, s);

    cout<<res<<endl;
}
