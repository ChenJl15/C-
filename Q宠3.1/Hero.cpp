#include "Hero.h"
#include "Weapon.h"
using namespace std;
#include <cstdlib>
#include<ctime>
#include<iostream>
string Hero::getName() { return name; }
void  Hero::setName(string n) { name = n; }
int  Hero::getBlood() { return blood; }
void  Hero::setBlood(int b) { blood = b; }
int  Hero::getSpeed() { return speed; }
void  Hero::setSpeed(int s) { speed = s; }
void  Hero::creatHero(string n, int b, int s){
	name = n;
	blood = b;
	speed = s;
}
void Hero::pushWeapon(void* weapon) {
	Weapons.push_back(weapon);
	
}
void Hero::popWeapon() {
	Weapons.pop_back();
}
void Hero::fight(Hero& hero) {
	int n = rand() % Weapons.size();
	if (n == 0) {
		if (hero.name == "С�˼�") {
			Hammer* weapon = (Hammer*)Weapons[0];
			hero.blood -= weapon->damage;
			cout << this->name << "ʹ��" << weapon->name <<
				"������" << hero.name << ",�����˺�Ϊ" << weapon->damage << "," << hero.name << "ʣ��Ѫ��Ϊ" << hero.blood << endl;
		}
		else {
			wooden_stick* weapon = (wooden_stick*)Weapons[0];
			hero.blood -= weapon->damage;
			cout << this->name << "ʹ��" << weapon->name <<
				"������" << hero.name << ",�����˺�Ϊ" << weapon->damage << "," << hero.name << "ʣ��Ѫ��Ϊ" << hero.blood << endl;
		}
	}
	else if (n == 1) {
		if (hero.name == "С�˼�") {
			bats* weapon = (bats*)Weapons[1];
			hero.blood -= weapon->damage;
			cout << this->name << "ʹ��" << weapon->name <<
				"������" << hero.name << ",�����˺�Ϊ" << weapon->damage << "," << hero.name << "ʣ��Ѫ��Ϊ" << hero.blood << endl;
		}
		else {
			shovel* weapon = (shovel*)Weapons[1];
			hero.blood -= weapon->damage;
			cout << this->name << "ʹ��" << weapon->name <<
				"������" << hero.name << ",�����˺�Ϊ"<<weapon->damage<<"," << hero.name << "ʣ��Ѫ��Ϊ" << hero.blood << endl;
		}
	}

}