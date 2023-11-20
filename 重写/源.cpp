#include <iostream>
using namespace std;
//
class father {
public:
	virtual void fun() {
		cout << "father" << endl;
	}
};
//子类重新定义父类中有相同返回值，相同名称和参数的
//虚函数
class son :public father {
public:
	//重写的函数与被重写的函数都必须为virtual
	void fun() {
		cout << "son" << endl;
	}
};

class grandson :public son {

public:
	void fun() {//是重写吗？利用多态证明是重写
		cout << "grandson" << endl;
	}
};

int main() {
	son s1;
	s1.fun();//son

	grandson g1;
	g1.fun();//grandson 

	father* f = &s1;
	f->fun();//son

	son* s = &g1;
	s->fun();//grandson


}