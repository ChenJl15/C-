#include <iostream>//��
#include <string>//��
#include <vector>//��3333333
using namespace std;
//��Ա���Ժͳ�Ա����
class person {
	//���Ĭ�����η�Ϊ private:ֻ�������ڷ���
	// 	             protected:���ڣ�����
	//               public:���ڣ���������

public:
	string name="С��";
private:
	int age = 21;
protected:
	double hight = 172.5;
	//����ʵ�ַ���
    void Study() {
		cout << "ѧϰ" << endl;
	}
	//��������������ʵ����Ҫ����������
	void sleep();

};
void person::sleep() {
	cout << "˯��" << endl;
}
int main() {
	person p;
	cout << p.name;


}