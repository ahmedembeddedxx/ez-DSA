#include <iostream>
#include <vector>
#include <set>
#include <queue>
using namespace std;


int findKthLargest(vector<int>& nums, int k) {
        
        if(nums.size()<k)
        {
            return -1;
        }
        priority_queue<int> res;
        
        for (auto i: nums)
            res.push(i);

        for(int i = 0; i < k-1; i++)
            res.pop();

        if(res.empty())
            return -1;
        return res.top();
}


int main()
{
    int arr[] = {3,2,3,1,2,4,5,5,6};
	vector<int> v1;
    for(int i = 0; i<9;i++)
        v1.push_back(arr[i]);

    cout<<findKthLargest(v1, 4)<<endl;

	return 0;
}
