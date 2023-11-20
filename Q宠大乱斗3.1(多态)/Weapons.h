#pragma once
#include<string>
#include "Hero.h"
#include<iostream>
using namespace std;
class Weapon {
protected:
	string name="Ĭ������";
	int damage=1;
public:
	int getDamage() { return damage; }
	string getName() { return name; }
	virtual int attack(int &blood) {
		return damage;
	}
};
class Hammer : public Weapon//������  ����
{
public:
	Hammer() {
		name = "������";
		damage = 12;
	}
	virtual int attack(int& blood) {
		int n = rand() % 5;//��1/4����
		if (n == 0) {
			cout << "**********����***********" << endl;
			return damage * 2;
		}
		return damage;
	}

};
class Bats : public Weapon//������� ����
{
public:
	Bats() {
		name = "�����";
		damage = 20;
	}
	virtual int attack(int& blood) {
		int n = rand() % 2;//�м�������
		if (n) {
			cout << "**********����***********" << endl;
			return damage * 2;
		}

		return damage;
	}
};
class Wooden_stick : public Weapon//ľ��  ������Ѫ
{
public:
	Wooden_stick() {
		name = "ľ��";
		damage = 9;
	}
	virtual int attack(int& blood) {
		int n = rand() % 2;//��1/2����
		if (n) {
			cout << "**********��Ѫ***********" << endl;
			blood += damage * 1;
		}
		return damage;
	
	}
};
class Shovel : public Weapon//����  ����
{
public:
	Shovel() {
		name = "����";
		damage = 18;
	}
	virtual int attack(int& blood) {
	
		int n = rand() % 4;//��1/4����
		if (n == 0) {
			cout << "**********����***********" << endl;
			return damage * 3;
		}
		return damage;
	}
};
