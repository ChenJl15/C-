#include <iostream>
#include <string>
using namespace std;
class Person {
public:
	int age;
	string name;
	int* p = (int*)malloc(sizeof(int)*3);
	Person() {//Ĭ�Ϲ��캯��
		cout << "Ĭ�Ϲ��캯��" << endl;
	}
	Person(int age) {
		this->age = age; 
	}
	

	//��������
	~Person() {//��������ڲ�ָ��ָ��Ķ����ڴ�

		if (p)free(p);
		cout << "�����ڲ�ָ��ָ��Ķ����ڴ��ͷ�" << endl;
	}


};

int main() {
	Person p1;
	//Person p3();//��������Ϊ���Ƿ���ֵΪ�����͵ĺ�������
	Person p2(23);
	cout << p2.age;

	//Person* p4 = (Person*)malloc(sizeof(Person) * 2);//����ָ����� 
	////��ִ�������������ͷŶ����ڲ�ָ��ָ��Ķ����ڴ�
	//free(p4);
	////�ͷŶ����ڴ�




}