#include <iostream>
using namespace std;


class Base {
public:
	void funA() { cout << "funA()" << endl; }
	virtual void funB() { cout << "funB()" << endl; };
};

class Heri :public Base {
public:
	void funA() { cout << "Heri::funA()" << endl; }//����
	void funA(int a) { cout << "Heri::funA(int a)" << endl; }//����
	void funB() { cout << "Heri::funB()" << endl; }//��д

};

int main() {
	Heri h;
	Base* b = &h;//���׵�ָ��ָ������Ķ���
	b->funA();//����
	b->funB();//������д�ķ���

	Base& b1 = h;//���׵�����ָ������Ķ���
	b1.funB();

	//Base b2 = h;
	//b2.funB();//���õ��Ǹ���ĺ���



}