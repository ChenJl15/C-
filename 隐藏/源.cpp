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
	void funA(int a){ cout << "Heri::funA(int a)" << endl; }//����
	void funB(int a) {
		cout << "Heri::funB(int a)";
	}
	void funB(){ cout << "Heri::funB()" << endl; }//��д

};
int main() {
	Base b;
	b.funA();
	b.funB();
	Heri h;
	//Base &b1 = h;//�����ָ��ָ������Ķ���/���������ָ������Ķ���
	//b1.funA();
	////b1.funA(1);
	////b.funB(2);
	//b1.funB();
	//���Ը���Ķ���ָ������Ķ���,���õ��Ǹ���ĳ�Ա����
	Base b2 = h;
	b2.funA();
	b2.funB();


}