#include <iostream>
using namespace std;
//������Ϊ������������ʵ�ֶ�̬���Ὣ���ǵ����ֶ�����Ϊdestructor

//����֮����ڼ̳й�ϵʱ��Ӧ�������е�������������д������Ϊ�麯��
//������ɾ��ָ���������ĸ���ָ��ʱ��ֻ����ø���������������������
//��������ȫ������ڴ�й©

class father {
public:
	virtual void fun() {

	}
	father() {
		cout << "father" << endl;

	}
	virtual ~father() {
		cout << "F����" << endl;
	}
	//	 ~father() {
	//	cout << "F����" << endl;
	//}
};


class son :public father {
public:
	void fun() {

	}
	son() {
		cout << "son" << endl;
	}
	~son() {
		cout << "S����" << endl;
	}

};

int main() {
	father* f = new son();
	delete f;
	//��delete�����ָ��ʱ��������������������븸��������������ɶ�̬�����Ե��ȵ������������������
	//֮�����ٵ����������������������Ϊdelete�Ļ����������, 
	//delete����ָ����ָ�Ŀռ䣬Ҫ���ø��������������
	return 0;
}








