#pragma once
using namespace std;
#include<vector>
#include<string>
class Hero {
private:
	string name;
	int blood=100;
	int speed=5;
	vector<void*> Weapons;
public:
	string getName();
	void setName(string n);
	int getBlood();
	void setBlood(int b);
	int getSpeed();
	void setSpeed(int s);
	void creatHero(string n, int b, int s);//����Ӣ��
	void pushWeapon(void* weapon);//����������������
	void popWeapon();//ɾ���������е��׸�����
	void fight(Hero& hero);//ս��
};