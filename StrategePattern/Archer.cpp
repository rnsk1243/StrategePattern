#include "Archer.h"
#include"ShortNowayAttack.h"
#include"ClongArrowAttack.h"


CArcher::CArcher()
{
	pShortAttack = new CShortNowayAttack(); // �ü��ϱ� �ٰŸ� ���� ����
	pLongAttack = new ClongArrowAttack(); // �ü��ϱ� ���Ÿ� ȭ�� ����
}


CArcher::~CArcher()
{
}
