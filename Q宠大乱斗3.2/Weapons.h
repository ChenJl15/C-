#pragma once
#include<string>
class Weapon {
protected:
	string name;
	int damage;
public:
	int getDamage() { return damage; }
	string getName() {return name;}

};
class Hammer: public Weapon//������
{
public:
	Hammer() {
		name = "������";
		damage = 12;
	}
};
class Bats : public Weapon//�������
{
public:
	Bats() {
		name = "�����";
		damage = 20;
	} 
};
class Wooden_stick : public Weapon//ľ��
{
public:
	Wooden_stick() {
		name = "ľ��";
		damage = 9;
	}
};
class Shovel : public Weapon//����
{
public:
	Shovel() {
		name = "����";
		damage = 18;
	}
};
