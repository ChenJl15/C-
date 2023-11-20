#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	int pub;
protected:
	int pro;
private:
	int pri;
};
//继承父类的权限方式只会缩小父类中成员在子类中的权限
//默认为private
class Student :private Person {
	void study() {
		pro;//private
		pub;//private
	/*	pri;*/
	}
};
class subStu :public Student {
	void write() {
		//pro;
		//pub;
	}
};


//class Student :protected Person {
//	void study() {
//		pro;//protected
//		pub;//protected
//	/*	pri;*/
//	}
//};
//class subStu :public Student {
//	void write() {
//		pro;
//		pub;
//	}
//};

int main() {
	Student s;
	
}
//class Student :public Person {
//	void study() {
//		pro;//protected
//		pub;//public
//	/*	pri;*/
//	}
//};
//class subStu :public Student {
//	void write() {
//		pro;
//		pub;
//	}
//};

