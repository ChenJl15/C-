#include<iostream>
using namespace std;
class father {
public:
	int a;
	father(int a) {
		this->a = a;
	}

};

class son :public father {

public:
	int a;
	son(int a):father(2) {
		this->a = a;
	}
	~son() {
		cout << " ����" << endl;
	}
};

int main() {
	son s(3);
	son(3);//��������
	cout << 12344 << endl;


}