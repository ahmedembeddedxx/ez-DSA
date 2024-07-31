#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int height = 5;
const int width = 2;

bool isOverlap(int interval1[2], int interval2[2])
{
    int a = max(interval1[0], interval2[0]);
    int b = min(interval1[1], interval2[1]);
    return b-a>=0;
}

void merge(int (&intervals)[height][width], int (&merged)[height][width])
{
    int merge_ptr = 0;
    merged[0][0] = intervals[0][0];
    merged[0][1] = intervals[0][1];
    

    for (int i = 1; i < height; i++)
    {
        if(isOverlap(intervals[i], merged[merge_ptr]))
        {
            int s = min(intervals[i][0], merged[merge_ptr][0]);
            int e = max(intervals[i][1], merged[merge_ptr][1]);

            merged[merge_ptr][0] = s, merged[merge_ptr][1] = e; 
        }
        else
        {
            merge_ptr++;
            merged[merge_ptr][0] = intervals[i][0];
            merged[merge_ptr][1] = intervals[i][1];
        }
    }

    merged[merge_ptr+1][0] = -1;
}


int main()
{
    int intervals[height][width] = {{1, 3}, {5, 10}, {7, 15}, {18, 30}, {22, 25}};
    int merged[height][width] = {{-1}};

    merge(intervals, merged);

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if(merged[i][j] == -1)
                return 0;
            cout<<merged[i][j]<<' ';
        }
        cout<<'\t';
    }
    

}
