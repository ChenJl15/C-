#include <iostream>
using namespace std;
//编译器为了让析构函数实现多态，会将它们的名字都处理为destructor

//当类之间存在继承关系时，应将父类中的析构函数（重写）设置为虚函数
//否则，在删除指向子类对象的父类指针时，只会调用父类的析构函数，子类对象
//析构不完全，造成内存泄漏

class father {
public:
	virtual void fun() {

	}
	father() {
		cout << "father" << endl;

	}
	virtual ~father() {
		cout << "F析构" << endl;
	}
	//	 ~father() {
	//	cout << "F析构" << endl;
	//}
};


class son :public father {
public:
	void fun() {

	}
	son() {
		cout << "son" << endl;
	}
	~son() {
		cout << "S析构" << endl;
	}

};

int main() {
	father* f = new son();
	delete f;
	//当delete父类的指针时，由于子类的析构函数与父类的析构函数构成多态，所以得先调动子类的析构函数；
	//之所以再调动父类的析构函数，是因为delete的机制所引起的, 
	//delete父类指针所指的空间，要调用父类的析构函数。
	return 0;
}








