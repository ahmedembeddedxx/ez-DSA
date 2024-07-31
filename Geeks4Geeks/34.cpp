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
    int z_ctr = 0;
    int z_index = -1;


    for (int i = 0; i < size && e < size; i++, e++)
    {
        if(arr[e] == 0 && z_ctr == 1)
        {
            s = z_index;
        }
        if(arr[e] == 0)
        {
            z_ctr++;
            z_index = e;
        }
        if(z_ctr == 2)
        {
            if(e-s>ctr)
            {
                ctr = e-s;
            }

            z_ctr = 1;
        }
    }
    if(e-s>ctr)
        ctr = e-s;
    
    return ctr;

}



int main()
{
    int arr[7] = {1,0,0,1,0,1,0};
    int s = sizeof(arr)/sizeof(arr[0]);

    int res = get_max_window(arr, s);

    cout<<res<<endl;
}
