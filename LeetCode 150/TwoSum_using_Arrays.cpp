#include <iostream>
#include <stack>
#include <string>
#include <cstring>
#include <queue>
#include <list>
#include <vector>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target)
{
	vector<int> res;

	for (int i = 0; i < nums.size(); i++)
	{
		for (int k = i + 1; k < nums.size(); k++)
		{
			if (nums[i] + nums[k] == target)
			{
				res.push_back(i);
				res.push_back(k);

				return res;
			}
		}
	}

}




int main() {

	vector<int> a;
	a.push_back(2);
	a.push_back(7);
	a.push_back(11);
	a.push_back(15);

	vector<int>b = twoSum(a, 9);
	for (int i = 0; i < b.size(); i++)
	{
		cout << b[i] << endl;
	}


	return 0;
}