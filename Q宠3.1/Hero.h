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
	void creatHero(string n, int b, int s);//创建英雄
	void pushWeapon(void* weapon);//将武器加入武器库
	void popWeapon();//删除武器库中的首个武器
	void fight(Hero& hero);//战斗
};