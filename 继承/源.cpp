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
//�̳и����Ȩ�޷�ʽֻ����С�����г�Ա�������е�Ȩ��
//Ĭ��Ϊprivate
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

