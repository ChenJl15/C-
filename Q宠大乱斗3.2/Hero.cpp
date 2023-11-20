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
void Hero::pushWeapon(void* weapon) {
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
		if (n == 0) {
			if (hero.name == "小菜鸡") {
				Hammer* weapon = (Hammer*)Weapons[0];
				hero.blood -= weapon->getDamage();
				cout << this->name << "使用" << weapon->getName() <<
					"攻击了" << hero.name << "," << hero.name << "剩余血量为" << hero.blood << endl;
			}else {
				Wooden_stick* weapon = (Wooden_stick*)Weapons[0];
				hero.blood -= weapon->getDamage();
				cout << this->name << "使用" << weapon->getName() <<
					"攻击了" << hero.name << "," << hero.name << "剩余血量为" << hero.blood << endl;
			}
		}
		else if(n==1) {
			if (hero.name == "小菜鸡") {
				Bats* weapon = (Bats*)Weapons[1];
				hero.blood -= weapon->getDamage();
				cout << this->name << "使用" << weapon->getName() <<
					"攻击了" << hero.name << "," << hero.name << "剩余血量为" << hero.blood << endl;
			}
			else {
				Shovel* weapon = (Shovel*)Weapons[1];
				hero.blood -= weapon->getDamage();
				cout << this->name << "使用" << weapon->getName() <<
					"攻击了" << hero.name << "," << hero.name << "剩余血量为" << hero.blood << endl;
			}
	}

}