#include <iostream>
using namespace std;

//���麯������û�к����壬
//ͬʱ�ڶ����ʱ���亯��������Ҫ����=0

//ӵ�д��麯�������Ǵ����ࣨ�����ࣩ�������಻��ֱ�Ӵ�������
//����ֻ����д�����еĴ��麯���󣬲��ܴ����������
class father {
public:
	int a;
	virtual void test() = 0;

};
class son :public father {
public:
	int a;
	void test() {
		cout << "����ʵ�ִ��麯��" << endl;
	}

};
int main() {
	//father f;//	������ʹ�ó��������� "father" �Ķ���
	son s;
	s.test();


}