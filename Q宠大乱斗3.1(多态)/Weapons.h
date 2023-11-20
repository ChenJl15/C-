#pragma once
#include<string>
#include "Hero.h"
#include<iostream>
using namespace std;
class Weapon {
protected:
	string name="默认名称";
	int damage=1;
public:
	int getDamage() { return damage; }
	string getName() { return name; }
	virtual int attack(int &blood) {
		return damage;
	}
};
class Hammer : public Weapon//大铁锤  暴击
{
public:
	Hammer() {
		name = "大铁锤";
		damage = 12;
	}
	virtual int attack(int& blood) {
		int n = rand() % 5;//有1/4几率
		if (n == 0) {
			cout << "**********暴击***********" << endl;
			return damage * 2;
		}
		return damage;
	}

};
class Bats : public Weapon//　棒球棒 连击
{
public:
	Bats() {
		name = "棒球棒";
		damage = 20;
	}
	virtual int attack(int& blood) {
		int n = rand() % 2;//有几率连击
		if (n) {
			cout << "**********暴击***********" << endl;
			return damage * 2;
		}

		return damage;
	}
};
class Wooden_stick : public Weapon//木棍  连击回血
{
public:
	Wooden_stick() {
		name = "木棍";
		damage = 9;
	}
	virtual int attack(int& blood) {
		int n = rand() % 2;//有1/2几率
		if (n) {
			cout << "**********回血***********" << endl;
			blood += damage * 1;
		}
		return damage;
	
	}
};
class Shovel : public Weapon//铁铲  暴击
{
public:
	Shovel() {
		name = "铁铲";
		damage = 18;
	}
	virtual int attack(int& blood) {
	
		int n = rand() % 4;//有1/4几率
		if (n == 0) {
			cout << "**********暴击***********" << endl;
			return damage * 3;
		}
		return damage;
	}
};
