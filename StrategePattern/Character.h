#pragma once
#include<iostream>
using namespace std;
#include"ClongAttack.h"
#include"ShortAttack.h"

class CCharacter
{
protected:
	ClongAttack* pLongAttack;
	CShortAttack* pShortAttack;
public:

	CCharacter()
	{
	}

	~CCharacter()
	{
	}

	void move()
	{
		cout << "캐릭터 이동 합니다" << endl;
	}
	void potionDrink()
	{
		cout << "냠냠 포션" << endl;
	}
	//pLongAttack이 어떤 캡슐클레스에 초기화 되는냐에따라 이 함수는 각각 다른 일을 함.
	void longAttack()
	{
		// 초기화된 캡슐에 정의된 일을 한다.
		pLongAttack->longAttack();
	}
	void shortAttack()
	{
		pShortAttack->shortAttack();
	}

};

// 새로운 기능을 추가하는 방법
/*
1단계 - 새로운 기술 캡슐추상클래스 만들기

2단계 - CCharacter 클래스에서 새로운 캡슐추상클래스 주소 선언

3단계 - 새로운 캡슐추상클래스를 상속받는 자식클래스를 만들고 구현(이때 비슷한 여러가지 자식 클래스를 만들 수 있다)

4단계 - CCharacter 클래스 새로운 추상클래스 주소를 통해 함수 호출
*/
