#include "Common.h"
#include "unit.h"

int main()
{
	srand((unsigned)time(NULL));

	Fighter nanashi;
	nanashi.InitRandomStatus();

	system("pause");
	return 0;
}