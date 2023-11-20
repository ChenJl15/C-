#include <iostream>//类
#include <string>//类
#include <vector>//类3333333
using namespace std;
//成员属性和成员函数
class person {
	//类的默认修饰符为 private:只能在类内访问
	// 	             protected:类内，子类
	//               public:类内，对象，子类

public:
	string name="小明";
private:
	int age = 21;
protected:
	double hight = 172.5;
	//类内实现方法
    void Study() {
		cout << "学习" << endl;
	}
	//类中声明，类外实现需要加上作用域
	void sleep();

};
void person::sleep() {
	cout << "睡觉" << endl;
}
int main() {
	person p;
	cout << p.name;


}