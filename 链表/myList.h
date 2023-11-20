#pragma once
#include<iostream>
#include<vector>
using namespace std;
struct Node {
	
	int data;//数据域
	Node* next;//指针域

	Node(int data) {
		this->data = data;
		this->next = nullptr;
	}

};

class myList
{
public:
	Node* head = nullptr;//头结点
	Node* tail = nullptr;//尾结点

	myList();
	myList(vector<int> nums);	/*构造函数声明*/
	void printList();//打印链表
	//~myList();
	void deleteNode(Node* node);//根据所给结点，删除此节点
	Node* getNode(int n);//返回n位置的结点


};

