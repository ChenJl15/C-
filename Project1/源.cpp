#include<iostream>
using namespace std;

int a = 3;
void swaps(int &a,int &b) {//������Ϊ����
	int t = a;
	a = b;
	b = t;
}

int fun1(int a) {
	a += 2;
	return a;
}//int temp=a   ===>  v1=temp
int& fun2(int a) {//������Ϊ����ֵ�����ڴ��в���������ֵ�ĸ���
	a += 2;
	return a;
}//int &temp=a, ====>   v2=temp   
int main() {

	//int b = 1;
	//int& a = b;
	//int c = 3;
	// 
	//a = c;
	//c = 4;
	//cout << b << " " << a << " " << c << endl;

//	const int a = 1;
////	int &b = a;//����
//	const int& c = a;

	//int a = 1, b = 2;
	//swaps(a, b);//���ú����ǳ�ʼ�����ñ����Ĺ���
	//cout << a << " " << b << endl;

	int v1=fun1(a);
	//int& v11 = fun1(a)
	//������Ϊ����ֵ
	//int& b = a;
	//int c = b;
	int v2 = fun2(a); 
	//int& b = a;
	//int &c = b;
	int& v22 = fun2(a);// 
	cout << v2 << endl;
	fun2(a) = 1;
	//cout << a<< endl;


}