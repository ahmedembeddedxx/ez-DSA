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
	bool search(string s, char c)
	{
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == c)
				return true;
		}
		return false;
	}
	int lengthOfLongestSubstring(string s)
	{
		if (s.length() <= 1)
			return s.length();
		string temp;
		int max_size = 0;
		for (int i = 0; i < s.length() - 1; i++)
		{
			temp = s[i] + '\0';
			for (int j = i + 1; j < s.length(); j++)
			{
				if (!search(temp, s[j]))
					temp += s[j];
				else
					break;
			}
			if (temp.length() > max_size)
			{
				max_size = temp.length();
			}
			temp = '\0';

		}

		return max_size;
	}
};


int main() {
	Solution S;
	cout << S.lengthOfLongestSubstring("Pookie");

	return 0;
}
