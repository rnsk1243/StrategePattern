#include "Wizard.h"
#include"ClongMagicAttack.h"
#include"ShortNowayAttack.h"


CWizard::CWizard()
{
	pShortAttack = new CShortNowayAttack(); // ������ϱ� �������� ����
	pLongAttack = new ClongMagicAttack(); // ������ϱ� ���Ÿ� ���� ����
}


CWizard::~CWizard()
{
}
