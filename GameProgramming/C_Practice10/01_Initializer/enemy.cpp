#include "enemy.h"

Enemy::Enemy()
	:Hp(8)
	,Mp(1)
	,Atk(2)
	,Def(1)
{
	Name[0] = '\0';
}

Enemy::~Enemy()
{
	printf("デストラクタ\n");
}

void Enemy::InitStatus(const char* enemyName)
{
	sprintf_s(Name, "%s", enemyName);

	Hp = 8;
	Atk = 2;
	Def = 1;
}

void Enemy::ShowStatus()
{
	printf("--- Enemy Status ---\n");

	printf("Name = %s\n", Name);
	printf("Hp = %d\n", Hp);
	printf("Atk = %d\n", Atk);
	printf("Def = %d\n", Def);
}

