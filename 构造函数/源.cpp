#include <iostream>
#include <string>
using namespace std;
class Person {
public:
	int age;
	string name;
	int* p = (int*)malloc(sizeof(int)*3);
	Person() {//默认构造函数
		cout << "默认构造函数" << endl;
	}
	Person(int age) {
		this->age = age; 
	}
	

	//析构函数
	~Person() {//清除对象内部指针指向的堆区内存

		if (p)free(p);
		cout << "对象内部指针指向的堆区内存释放" << endl;
	}


};

int main() {
	Person p1;
	//Person p3();//编译器认为这是返回值为类类型的函数声明
	Person p2(23);
	cout << p2.age;

	//Person* p4 = (Person*)malloc(sizeof(Person) * 2);//堆区指向堆区 
	////先执行析构函数，释放对象内部指针指向的堆区内存
	//free(p4);
	////释放堆区内存




}