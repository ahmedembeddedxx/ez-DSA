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
	bool isPalindrome(string str, int s, int e)
	{
		for (int i = 0; i < floor((s + e) / 2); i++, s++, e--)
		{
			if (s > e)
				return true;
			if (str[s] != str[e])
				return false;
		}
		return true;
	}
	string longestPalindrome(string s)
	{
		if (s.length() <= 1)
			return s;

		int max = 0;
		string max_ = " ";
		for (int i = 0; i < s.length(); i++)
		{
			for (int j = i; j < s.length(); j++)
			{
				if (isPalindrome(s, i, j + 1))
					if ((j - i) > max)
					{
						max = s.substr(i, j + 2).length();
						max_ = s.substr(i, j + 2);
					}
			}
		}
		return max_;

	}
};
int main() {
	Solution S;
	cout << S.longestPalindrome("cbbd");
	return 0;
}
