#include <iostream>
#include <string>
using namespace std;

class A {
public:
	int a;
	int b;
	const int c;
	int& d;
	//��ʼ�������б�
	//��Ա�Ĺ���˳��  �ͳ�ʼ�������б��е�˳���޹أ�
	// ������������˳���й�,�ȹ���a����b,c,d
	A():b(33),a(25),c(3),d(a){

	}

	A(int val):a(1), b(2),c(4),d(b){
		cout << "�вι��캯��" << endl;
	}

};

int main() {

	A aTest;
	cout << aTest.a << " " << aTest.b << " " << aTest.c << " " << aTest.d;
}