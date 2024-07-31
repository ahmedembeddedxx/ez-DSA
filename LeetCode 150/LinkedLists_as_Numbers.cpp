#include <iostream>
#include <stack>
#include <string>
#include <cstring>
#include <queue>
#include <list>
#include <vector>
using namespace std;




struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
	{
		int A = 0;
		int B = 0;
		ListNode* temp1 = l1;
		ListNode* temp2 = l2;
		int i = 1;



		while (temp1 != nullptr || temp2 != nullptr)
		{
			if (temp1 != nullptr)
			{
				A += temp1->val * i;
				temp1 = temp1->next;
			}
			if (temp2 != nullptr)
			{
				B += temp2->val * i;
				temp2 = temp2->next;
			}
			i *= 10;
		}

		ListNode* result = nullptr;
		temp2 = nullptr;

		A += B;

		B = A % 10;
		A /= 10;
		result = new ListNode(B);
		temp2 = result;


		while (A != 0)
		{
			B = A % 10;
			A /= 10;


			temp2->next = new ListNode(B);
			temp2 = temp2->next;
		}

		temp2 = result;
		while (temp2 != nullptr)
		{
			cout << temp2->val;
			temp2 = temp2->next;
		}

		return result;
	}
};

int main() {
	ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3))); // represents 342
	ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4))); // represents 465

	Solution solution;

	solution.addTwoNumbers(l1, l2);



	delete l1;
	delete l2;

	return 0;
}
