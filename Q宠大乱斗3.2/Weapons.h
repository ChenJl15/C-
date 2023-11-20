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
class Hammer: public Weapon//´óÌú´¸
{
public:
	Hammer() {
		name = "´óÌú´¸";
		damage = 12;
	}
};
class Bats : public Weapon//¡¡°ôÇò°ô
{
public:
	Bats() {
		name = "°ôÇò°ô";
		damage = 20;
	} 
};
class Wooden_stick : public Weapon//Ä¾¹÷
{
public:
	Wooden_stick() {
		name = "Ä¾¹÷";
		damage = 9;
	}
};
class Shovel : public Weapon//Ìú²ù
{
public:
	Shovel() {
		name = "Ìú²ù";
		damage = 18;
	}
};
