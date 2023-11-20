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