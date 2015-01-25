#include "DamageCapacity.h"


DamageCapacity::DamageCapacity() : Capacity()
{
}

DamageCapacity::DamageCapacity(int level = 0) : Capacity(level)
{
}

DamageCapacity::~DamageCapacity()
{
}

void DamageCapacity::updateValue()
{
	mValue = (1 + mLevel) * 1.5;
}
