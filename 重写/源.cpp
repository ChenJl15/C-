#include <iostream>
using namespace std;
//
class father {
public:
	virtual void fun() {
		cout << "father" << endl;
	}
};
//�������¶��常��������ͬ����ֵ����ͬ���ƺͲ�����
//�麯��
class son :public father {
public:
	//��д�ĺ����뱻��д�ĺ���������Ϊvirtual
	void fun() {
		cout << "son" << endl;
	}
};

class grandson :public son {

public:
	void fun() {//����д�����ö�̬֤������д
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