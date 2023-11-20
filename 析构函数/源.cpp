#include <iostream>
#include <string>
using namespace std;

class A {
public:
	int a;
	int b;
	const int c;
	int& d;
	//初始化参数列表
	//成员的构造顺序  和初始化参数列表中的顺序无关，
	// 与在类中声明顺序有关,先构造a，后b,c,d
	A():b(33),a(25),c(3),d(a){

	}

	A(int val):a(1), b(2),c(4),d(b){
		cout << "有参构造函数" << endl;
	}

};

int main() {

	A aTest;
	cout << aTest.a << " " << aTest.b << " " << aTest.c << " " << aTest.d;
}