#include "Archer.h"
#include"ShortNowayAttack.h"
#include"ClongArrowAttack.h"


CArcher::CArcher()
{
	pShortAttack = new CShortNowayAttack(); // 궁수니까 근거리 공격 못함
	pLongAttack = new ClongArrowAttack(); // 궁수니까 원거리 화살 공격
}


CArcher::~CArcher()
{
}
