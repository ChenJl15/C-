#pragma once
using namespace std;
#include<vector>
#include<string>
#include"Weapons.h"
class Hero {
private:
	string name;
	int blood = 100;
	int speed = 5;
	vector<Weapon*> Weapons;
public:
	Hero() {
	}
	Hero(string name, int blood, int speed);
	string getName();
	void setName(string n);
	int getBlood();
	void setBlood(int b);
	int getSpeed();
	void setSpeed(int s);
	void pushWeapon(Weapon* weapon);//将武器加入武器库
	void popWeapon();//删除武器库中的首个武器
	Hero* Speed_cmp(Hero& otherHero);
	void fight(Hero& hero);//战斗
};