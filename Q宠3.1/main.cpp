#include "Hero.h"
#include "Weapon.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
Hero* Speed_cmp(Hero& h1, Hero& h2) {
	if (h1.getSpeed() > h2.getSpeed()) return &h1;
	return &h2;
}
int main() {
	//ÖÖËæ»úÖÖ×Ó
	srand(time(0));

	//´´½¨Ó¢ÐÛ
	Hero h1;
	Hero h2;
	h1.creatHero("Ð¡²Ë¼¦", 100, 5);
	h2.creatHero("ÀÏÓÍÌõ", 110, 4);

	//´´½¨ÎäÆ÷
	Hammer h;//´óÌú´¸
	Bats b;//°ôÇò°ô
	Wooden_stick w;//Ä¾¹÷
	Shovel s;//Ìú²ù

	//ÎäÆ÷¿âÖÐÌí¼ÓÎäÆ÷
	h1.pushWeapon((void*)&h);
	h1.pushWeapon((void*)&b);
	h2.pushWeapon((void*)&w);
	h2.pushWeapon((void*)&s);

	bool flag = true;
	Hero* hone = Speed_cmp(h1, h2);
	Hero* htwo = (&h1 == hone) ? &h2 : &h1;
	while (hone->getBlood() > 0 &&htwo->getBlood() > 0) {
		if (flag)
		{
			hone->fight(*htwo);
		}
		else {
			htwo->fight(*hone);
		}
		flag = !flag;
	}

}