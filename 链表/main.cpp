#include"myList.h"


int main() {
	vector<int> nums = {1,3,4,6,8,2};
	myList L(nums);
	L.printList();
	//L.deleteNode(L.getNode(3));
	//cout << L.get(2) << endl;
	cout << L.get(7) << endl;
	L.printList();
}