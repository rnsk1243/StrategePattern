#include "Warrior.h"
#include"ShortBasicAttack.h"
#include"ClongNowayAttack.h"


CWarrior::CWarrior()
{
	// ������ Ư�� ĸ��ȭ Ŭ������ �θ� ������� �ʱ�ȭ ����
	// �̷��� �ʱ�ȭ �������� �θ� Ŭ�������� ������� �Լ��� ����� �� �ִ�.longAttack() // shortAttack() 
	// �ʱ�ȭ ���� ĸ���� ���� longAttack() // shortAttack() �� �� �� �ִ� ���� �޶���.
	pShortAttack = new CShortBasicAttack(); // ����ϱ� �⺻��������
	pLongAttack = new ClongNowayAttack(); // ����ϱ� ���Ÿ������� �Ұ����ϵ��� ��.
}


CWarrior::~CWarrior()
{
}
