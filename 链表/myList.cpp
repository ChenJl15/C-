#include "myList.h"

myList::myList() {

}
myList::myList(vector<int> nums) {
	if (nums.size() == 0)return;
	Node* node = new Node(nums[0]);
	head = node;
	tail = head;

	for (int i =1; i < nums.size(); i++)
	{
		Node* node = new Node(nums[i]);
		tail->next = node;//Æ´½Ó
		tail = node;//tail=tail->next

	}

}

//myList::~myList() {
//
//		Node* front = head;
//		Node* behind = front->next;
//		while (behind) {
//			delete front;
//			front = behind;
//			behind = behind->next;	
//		}
//		delete tail;
//	
//
//}


void myList::printList() {
	Node* p =head;
	while (p) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}
Node* myList::getNode(int n) {
	Node* p = head;
	for (; n>1; n--) {
		p=p->next;
	}

	return p;

}
void myList::deleteNode(Node* node) {
	node->data = node->next->data;
	node->next = node->next->next;

}
