#ifndef FIGHTER_H
#define FIGHTER_H

#include "Common.h"

class Fighter
{
public:
	Fighter();
	~Fighter();

	void InitRandomStatus();

	char name[32];
};

Status status;

#endif
