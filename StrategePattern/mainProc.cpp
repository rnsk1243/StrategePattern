#include<iostream>
#include"Character.h"
#include"Archer.h"
#include"Warrior.h"
#include"Wizard.h"
using namespace std;

void main()
{
	// �� Ŭ������ �ʱ�ȭ
	CCharacter* warrior = new CWarrior();
	CCharacter* wizard = new CWizard();
	CCharacter* archer = new CArcher();

	cout << "����, ������, �ü� �������� ���� �ɷ�" << endl;
	cout << "=====================================" << endl;
	// ����, ������, �ü� �������� ���� �ɷ�
	// �̵�
	cout << "���� �̵�" << endl;
	warrior->move();
	cout << "������ �̵�" << endl;
	wizard->move();
	cout << "�ü� �̵�" << endl;
	archer->move();
	// ���� �Ա�
	cout << "���� ����Ա�" << endl;
	warrior->potionDrink();
	cout << "������ ����Ա�" << endl;
	wizard->potionDrink();
	cout << "�ü� ����Ա�" << endl;
	archer->potionDrink();

	//-----------------------------------------
	cout << "=====================================" << endl;
	cout << "���� ���� �ɷ�" << endl;
	cout << "=====================================" << endl;
	// ���� ���� �ɷ�
	warrior->shortAttack();
	warrior->longAttack();

	//-----------------------------------------
	cout << "=====================================" << endl;
	cout << "������ ���� �ɷ�" << endl;
	cout << "=====================================" << endl;
	// ������ ���� �ɷ�
	wizard->shortAttack();
	wizard->longAttack();

	//-----------------------------------------
	cout << "=====================================" << endl;
	cout << "�ü� ���� �ɷ�" << endl;
	cout << "=====================================" << endl;
	// �ü� ���� �ɷ�
	archer->shortAttack();
	archer->longAttack();


}