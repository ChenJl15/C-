#pragma once
#include<iostream>
#include<vector>
using namespace std;
struct Node {
	
	int data;//������
	Node* next;//ָ����

	Node(int data) {
		this->data = data;
		this->next = nullptr;
	}

};

class myList
{
public:
	Node* head = nullptr;//ͷ���
	Node* tail = nullptr;//β���

	myList();
	myList(vector<int> nums);	/*���캯������*/
	void printList();//��ӡ����
	//~myList();
	void deleteNode(Node* node);//����������㣬ɾ���˽ڵ�
	Node* getNode(int n);//����nλ�õĽ��


};

