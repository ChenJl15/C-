#include "Ӣ��.h"
#include "����.h"
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
			cout << h1.name << "ʹ��" << ((Hammer*)weaponone[0])->name << "������" << h2.name << "," << h2.name << "ʣ��Ѫ��Ϊ" << h2.blood << endl;
		}
		else if (n == 1) {
			h2.blood = h2.blood - ((bats*)weaponone[1])->damage;
			cout << h1.name << "ʹ��" << ((bats*)weaponone[1])->name << "������" << h2.name << "," << h2.name << "ʣ��Ѫ��Ϊ" << h2.blood << endl;
		}
	}

		else {
			int n = rand() % weapontwo.size();
			if (n == 0)
			{
				h1.blood = h1.blood - ((wooden_stick*)weapontwo[0])->damage;
				cout << h2.name << "ʹ��" << ((wooden_stick*)weapontwo[0])->name << "������" << h1.name << "," << h1.name << "ʣ��Ѫ��Ϊ" << h1.blood << endl;
			}
			else if (n == 1) {
				h1.blood = h1.blood - ((shovel*)weapontwo[1])->damage;
				cout << h2.name << "ʹ��" << ((shovel*)weapontwo[1])->name << "������" << h1.name << "," << h1.name << "ʣ��Ѫ��Ϊ" << h1.blood << endl;
			}
		}
	}

int main() {
	//���������
	srand(time(0));
	//����Ӣ��
	Hero h1;
	h1.name = "С�˼�";
	h1.blood = 100;
	h1.speed = 5;
	Hero h2;
	h2.name = "������";
	h2.blood = 120;
	h2.speed = 4;

	//��������
	Hammer h;//������
	bats b;//�����
	wooden_stick w;//ľ��
	shovel s;//����

	vector<void*> weaponone;
	weaponone.push_back((void*)&h);
	weaponone.push_back((void*)&b);
	vector<void*> weapontwo;
	weapontwo.push_back((void*)&w);
	weapontwo.push_back((void*)&s);


	//bool flag;
	//flag=speed_cmp(h1,h2);
	//���
	bool flag = true;
	Hero* hone = Speed_cmp(h1, h2);
	Hero* htwo = (&h1==hone)?&h2:&h1;
	while (hone->blood > 0 && htwo->blood > 0) {
		fight(*hone, *htwo, weaponone, weapontwo, flag);
		flag = !flag;
	}

}