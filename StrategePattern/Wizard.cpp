#include "Wizard.h"
#include"ClongMagicAttack.h"
#include"ShortNowayAttack.h"


CWizard::CWizard()
{
	pShortAttack = new CShortNowayAttack(); // 마법사니까 근접공격 못해
	pLongAttack = new ClongMagicAttack(); // 마법사니까 원거리 매직 공격
}


CWizard::~CWizard()
{
}
