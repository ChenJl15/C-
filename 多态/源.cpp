#include <iostream>
using namespace std;


class Base {
public:
	void funA() { cout << "funA()" << endl; }
	virtual void funB() { cout << "funB()" << endl; };
};

class Heri :public Base {
public:
	void funA() { cout << "Heri::funA()" << endl; }//隐藏
	void funA(int a) { cout << "Heri::funA(int a)" << endl; }//隐藏
	void funB() { cout << "Heri::funB()" << endl; }//重写

};

int main() {
	Heri h;
	Base* b = &h;//父亲的指针指向子类的对象
	b->funA();//隐藏
	b->funB();//子类重写的方法

	Base& b1 = h;//父亲的引用指向子类的对象
	b1.funB();

	//Base b2 = h;
	//b2.funB();//调用的是父类的函数



}