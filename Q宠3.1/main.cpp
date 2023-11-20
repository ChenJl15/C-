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
	//���������
	srand(time(0));

	//����Ӣ��
	Hero h1;
	Hero h2;
	h1.creatHero("С�˼�", 100, 5);
	h2.creatHero("������", 110, 4);

	//��������
	Hammer h;//������
	Bats b;//�����
	Wooden_stick w;//ľ��
	Shovel s;//����

	//���������������
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