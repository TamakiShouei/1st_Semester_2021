#include "unit.h"

Fighter::Fighter()
	
{
	name[0] = '\0';
}

Fighter::~Fighter()
{

}

void Fighter::InitRandomStatus()
{
	status.hp = rand() % 21;
	status.str = rand() % 21;
	status.mag = rand() % 21;
	status.tec = rand() % 21;
	status.spd = rand() % 21;
	status.def = rand() % 21;
	status.def = rand() % 21;
	status.luc = rand() % 21;
	status.mde = rand() % 21;
}