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
		cout << "ĳ���� �̵� �մϴ�" << endl;
	}
	void potionDrink()
	{
		cout << "�ȳ� ����" << endl;
	}
	//pLongAttack�� � ĸ��Ŭ������ �ʱ�ȭ �Ǵ³Ŀ����� �� �Լ��� ���� �ٸ� ���� ��.
	void longAttack()
	{
		// �ʱ�ȭ�� ĸ���� ���ǵ� ���� �Ѵ�.
		pLongAttack->longAttack();
	}
	void shortAttack()
	{
		pShortAttack->shortAttack();
	}

};

// ���ο� ����� �߰��ϴ� ���
/*
1�ܰ� - ���ο� ��� ĸ���߻�Ŭ���� �����

2�ܰ� - CCharacter Ŭ�������� ���ο� ĸ���߻�Ŭ���� �ּ� ����

3�ܰ� - ���ο� ĸ���߻�Ŭ������ ��ӹ޴� �ڽ�Ŭ������ ����� ����(�̶� ����� �������� �ڽ� Ŭ������ ���� �� �ִ�)

4�ܰ� - CCharacter Ŭ���� ���ο� �߻�Ŭ���� �ּҸ� ���� �Լ� ȣ��
*/
