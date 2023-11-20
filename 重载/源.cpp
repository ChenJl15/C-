#include<iostream>
using namespace std;
int add(int a) {
	cout << "返回值类型不同" << endl;
	return 1;
}//也是重载
//void add(int a) {函数名和函数参数列表与int add(int a)相同
//	cout << "返回值类型不同" << endl;
//}
void add() {
	cout << " 无参" << endl;
}
void add(int a,double d) {
	cout << "int  double" << endl;
}
void add(double a, int d) {
	cout << "double  int" << endl;
}
void print(int a=1, int b=2, int c=3, int d=4) {//参数默认值,必须依次从右向左给默认值
	cout << a << " " << b << " " << c << " " << d << endl;
}
int main() {
	add();
	add(2);
	add(2, 3.5);
	add(5.3, 34);
	print();
}