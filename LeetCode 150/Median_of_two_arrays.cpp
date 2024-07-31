#include <iostream>
#include <stack>
#include <string>
#include <cstring>
#include <queue>
#include <list>
#include <vector>
using namespace std;

class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
	{
		if (nums1.size() == 0 && nums2.size() == 0)
			return 0;
		vector<int> nums3;

		int ptr1 = 0;
		int ptr2 = 0;
		int ctr = 0;

		while (ptr1 < nums1.size() || ptr2 < nums2.size())
		{
			if (ptr1 < nums1.size() && ptr2 < nums2.size())
			{
				if (nums1[ptr1] < nums2[ptr2])
				{
					nums3.push_back(nums1[ptr1]);
					ptr1++;
				}
				else
				{
					nums3.push_back(nums2[ptr2]);
					ptr2++;
				}
				ctr++;
			}
			else if (ptr1 < nums1.size())
			{
				nums3.push_back(nums1[ptr1]);
				ptr1++;
			}
			else if (ptr2 < nums2.size())
			{
				nums3.push_back(nums2[ptr2]);
				ptr2++;
			}
		}
		int k = (nums3.size()) / 2;
		if (nums3.size() % 2 == 0)
			return (nums3[k] + nums3[k - 1]) / 2.0;

		return nums3[k];

	}
};


int main() {
	Solution S;
	vector<int> A;
	vector<int> B;
	A.push_back(1);
	A.push_back(3);
	B.push_back(2);
	B.push_back(4);

	cout << S.findMedianSortedArrays(A, B);


	return 0;
}
