#include "英雄.h"
#include "武器.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
using namespace std;
Hero* Speed_cmp(Hero& h1, Hero& h2) {
	if (h1.speed > h2.speed) return &h1;
	return &h2;
}
void fight(Hero& h1, Hero& h2, vector<void*>& weaponone, vector<void*>& weapontwo, bool flag) {
	if (flag)
	{
		int n = rand() % weaponone.size();
		if (n == 0)
		{
			h2.blood = h2.blood - ((Hammer*)weaponone[0])->damage;
			cout << h1.name << "使用" << ((Hammer*)weaponone[0])->name << "攻击了" << h2.name << "," << h2.name << "剩余血量为" << h2.blood << endl;
		}
		else if (n == 1) {
			h2.blood = h2.blood - ((bats*)weaponone[1])->damage;
			cout << h1.name << "使用" << ((bats*)weaponone[1])->name << "攻击了" << h2.name << "," << h2.name << "剩余血量为" << h2.blood << endl;
		}
	}

		else {
			int n = rand() % weapontwo.size();
			if (n == 0)
			{
				h1.blood = h1.blood - ((wooden_stick*)weapontwo[0])->damage;
				cout << h2.name << "使用" << ((wooden_stick*)weapontwo[0])->name << "攻击了" << h1.name << "," << h1.name << "剩余血量为" << h1.blood << endl;
			}
			else if (n == 1) {
				h1.blood = h1.blood - ((shovel*)weapontwo[1])->damage;
				cout << h2.name << "使用" << ((shovel*)weapontwo[1])->name << "攻击了" << h1.name << "," << h1.name << "剩余血量为" << h1.blood << endl;
			}
		}
	}

int main() {
	//种随机种子
	srand(time(0));
	//创建英雄
	Hero h1;
	h1.name = "小菜鸡";
	h1.blood = 100;
	h1.speed = 5;
	Hero h2;
	h2.name = "老油条";
	h2.blood = 120;
	h2.speed = 4;

	//创建武器
	Hammer h;//大铁锤
	bats b;//棒球棒
	wooden_stick w;//木棍
	shovel s;//铁铲

	vector<void*> weaponone;
	weaponone.push_back((void*)&h);
	weaponone.push_back((void*)&b);
	vector<void*> weapontwo;
	weapontwo.push_back((void*)&w);
	weapontwo.push_back((void*)&s);


	//bool flag;
	//flag=speed_cmp(h1,h2);
	//标记
	bool flag = true;
	Hero* hone = Speed_cmp(h1, h2);
	Hero* htwo = (&h1==hone)?&h2:&h1;
	while (hone->blood > 0 && htwo->blood > 0) {
		fight(*hone, *htwo, weaponone, weapontwo, flag);
		flag = !flag;
	}

}