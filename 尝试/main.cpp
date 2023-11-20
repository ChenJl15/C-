#include"Node.h"
#include <vector>
#include<iostream>
using namespace std;
int main() {
	Node* head = nullptr;
	Node* tail = nullptr;
	vector<int> nums = {1,2,3,4,5};
	head = new Node(nums[0]);
	tail = head;
	for (int i = 1; i < nums.size(); i++)
	{
		Node* n = new Node(nums[i]);
		tail->next = n;
		tail = n;
	}
	//¥Ú”°
	Node* p = head;
	while (p) {
		cout << p->data << " ";
		p = p->next;
	}


}