#include "Hero.h"
#include "Weapons.h"
using namespace std;
#include <cstdlib>
#include<ctime>
#include<iostream>
Hero::Hero(string name, int blood, int speed) {
	this->name = name;
	this->blood = blood;
	this->speed = speed;
}
string Hero::getName() { return name; }
void  Hero::setName(string n) { name = n; }
int  Hero::getBlood() { return blood; }
void  Hero::setBlood(int b) { blood = b; }
int  Hero::getSpeed() { return speed; }
void  Hero::setSpeed(int s) { speed = s; }
void Hero::pushWeapon(Weapon* weapon) {
	Weapons.push_back(weapon);
}
void Hero::popWeapon() {
	Weapons.pop_back();
}
Hero* Hero::Speed_cmp(Hero& otherHero) {
	if (this->getSpeed() > otherHero.getSpeed()) return this;
	return &otherHero;
}

void Hero::fight(Hero& hero) {
	int n = rand() % Weapons.size();
			hero.blood -=Weapons[n]->attack(this->blood);
			cout << this->name << "ʹ��" << this->Weapons[n]->getName() <<
				"������" << hero.name <<",������һ���˺�Ϊ��" << this->Weapons[n]->getDamage()<<", ��ɵ��˺�Ϊ:"<< this->Weapons[n]->attack(this->blood)<<","<<hero.name <<
				"ʣ��Ѫ��Ϊ" << hero.blood << endl;
}