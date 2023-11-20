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
	void funA(int a){ cout << "Heri::funA(int a)" << endl; }//隐藏
	void funB(int a) {
		cout << "Heri::funB(int a)";
	}
	void funB(){ cout << "Heri::funB()" << endl; }//重写

};
int main() {
	Base b;
	b.funA();
	b.funB();
	Heri h;
	//Base &b1 = h;//父类的指针指向子类的对象/父类的引用指向子类的对象
	//b1.funA();
	////b1.funA(1);
	////b.funB(2);
	//b1.funB();
	//尝试父类的对象指向子类的对象,调用的是父类的成员函数
	Base b2 = h;
	b2.funA();
	b2.funB();


}