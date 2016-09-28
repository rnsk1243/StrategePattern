#include<iostream>
#include"Character.h"
#include"Archer.h"
#include"Warrior.h"
#include"Wizard.h"
using namespace std;

void main()
{
	// 각 클래스별 초기화
	CCharacter* warrior = new CWarrior();
	CCharacter* wizard = new CWizard();
	CCharacter* archer = new CArcher();

	cout << "전사, 마법사, 궁수 공통으로 갖는 능력" << endl;
	cout << "=====================================" << endl;
	// 전사, 마법사, 궁수 공통으로 갖는 능력
	// 이동
	cout << "전사 이동" << endl;
	warrior->move();
	cout << "마법사 이동" << endl;
	wizard->move();
	cout << "궁수 이동" << endl;
	archer->move();
	// 물약 먹기
	cout << "전사 물약먹기" << endl;
	warrior->potionDrink();
	cout << "마법사 물약먹기" << endl;
	wizard->potionDrink();
	cout << "궁수 물약먹기" << endl;
	archer->potionDrink();

	//-----------------------------------------
	cout << "=====================================" << endl;
	cout << "전사 고유 능력" << endl;
	cout << "=====================================" << endl;
	// 전사 고유 능력
	warrior->shortAttack();
	warrior->longAttack();

	//-----------------------------------------
	cout << "=====================================" << endl;
	cout << "마법사 고유 능력" << endl;
	cout << "=====================================" << endl;
	// 마법사 고유 능력
	wizard->shortAttack();
	wizard->longAttack();

	//-----------------------------------------
	cout << "=====================================" << endl;
	cout << "궁수 고유 능력" << endl;
	cout << "=====================================" << endl;
	// 궁수 고유 능력
	archer->shortAttack();
	archer->longAttack();


}