#include<iostream>
using namespace std;
int add(int a) {
	cout << "����ֵ���Ͳ�ͬ" << endl;
	return 1;
}//Ҳ������
//void add(int a) {�������ͺ��������б���int add(int a)��ͬ
//	cout << "����ֵ���Ͳ�ͬ" << endl;
//}
void add() {
	cout << " �޲�" << endl;
}
void add(int a,double d) {
	cout << "int  double" << endl;
}
void add(double a, int d) {
	cout << "double  int" << endl;
}
void print(int a=1, int b=2, int c=3, int d=4) {//����Ĭ��ֵ,�������δ��������Ĭ��ֵ
	cout << a << " " << b << " " << c << " " << d << endl;
}
int main() {
	add();
	add(2);
	add(2, 3.5);
	add(5.3, 34);
	print();
}