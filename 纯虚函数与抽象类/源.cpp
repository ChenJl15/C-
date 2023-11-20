#include <iostream>
using namespace std;

//纯虚函数就是没有函数体，
//同时在定义的时候，其函数名后面要加上=0

//拥有纯虚函数的类是纯虚类（抽象类）。纯虚类不能直接创建对象。
//子类只有重写了所有的纯虚函数后，才能创建子类对象
class father {
public:
	int a;
	virtual void test() = 0;

};
class son :public father {
public:
	int a;
	void test() {
		cout << "子类实现纯虚函数" << endl;
	}

};
int main() {
	//father f;//	不允许使用抽象类类型 "father" 的对象
	son s;
	s.test();


}