#include "pch.h"
#include "gate.h"


gate::gate()
{
}




gate::~gate()
{
}

bool gate::porte_Et(bool entree1, bool entree2)
{
	return entree1 and entree2;
}

bool gate::porte_Or(bool entree1, bool entree2)
{
	return entree1 or entree2;
}

bool gate::porte_Xor(bool entree1, bool entree2)
{
	return entree1 xor entree2;
}
