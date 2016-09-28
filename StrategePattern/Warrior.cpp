#include "Warrior.h"
#include"ShortBasicAttack.h"
#include"ClongNowayAttack.h"


CWarrior::CWarrior()
{
	// 전사의 특성 캡슐화 클래스로 부모 멤버변수 초기화 해줌
	// 이렇게 초기화 해줌으로 부모 클래스에서 만들어준 함수를 사용할 수 있다.longAttack() // shortAttack() 
	// 초기화 해준 캡슐에 따라서 longAttack() // shortAttack() 이 할 수 있는 일이 달라짐.
	pShortAttack = new CShortBasicAttack(); // 전사니까 기본근접공격
	pLongAttack = new ClongNowayAttack(); // 전사니까 원거리공격은 불가능하도록 함.
}


CWarrior::~CWarrior()
{
}
