#include <iostream>
using namespace std;

class father {
public:
	int height=173;
	void test() {
		cout << " father " << endl;
	}
};

class mother {
public:
	int height=170;
	void test() {
		cout << " mother " << endl;
	}
};

class son :public father,public mother{



};

int main() {
	son s;
//	s.height;//������
	//ʹ������������
	cout << s.father::height << endl;
	s.mother::test();

}