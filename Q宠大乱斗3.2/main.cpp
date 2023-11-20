#include "Hero.h"
#include "Weapons.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main() {
	//种随机种子
	srand(time(0));
	//创建英雄
	Hero h1("小菜鸡", 100, 5);
	Hero h2("老油条", 110, 4);

	//创建武器
	Hammer h;//大铁锤
	Bats b;//棒球棒
	Wooden_stick w;//木棍
	Shovel s;//铁铲

	//武器库中添加武器
	h1.pushWeapon((void*)&h);
	h1.pushWeapon((void*)&b);
	h2.pushWeapon((void*)&w);
	h2.pushWeapon((void*)&s);

	bool flag = true;
	Hero* hone = h1.Speed_cmp(h2);
	//cout << hone->getName() << endl;
	Hero* htwo = (&h1 == hone) ? &h2 : &h1;
	//cout << htwo->getName() << endl;
	while (hone->getBlood() > 0 && htwo->getBlood() > 0) {
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