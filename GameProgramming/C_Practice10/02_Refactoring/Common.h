#include <stdlib.h>
#include <stdio.h>
#include <time.h>

struct Status
{
	Status();

	int hp;
	int str;
	int mag;
	int tec;
	int spd;
	int def;
	int luc;
	int mde;
};

Status::Status()
{
	hp = 1;
	str = 1;
	mag = 1;
	tec = 1;
	spd = 1;
	def = 1;
	luc = 1;
	mde = 1;

}

