#include "Hero.h"
#include "Weapons.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main() {
	//���������
	srand(time(0));
	//����Ӣ��
	Hero h1("С�˼�", 100, 5);
	Hero h2("������", 110, 4);

	//��������

	Hammer h;//������
	Bats b;//�����
	Wooden_stick w;//ľ��
	Shovel s;//����

	//���������������
	h1.pushWeapon(&h);
	h1.pushWeapon(&b);
	h2.pushWeapon(&w);
	h2.pushWeapon(&s);

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