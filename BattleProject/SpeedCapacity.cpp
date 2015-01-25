#include "SpeedCapacity.h"


SpeedCapacity::SpeedCapacity() : Capacity()
{
}

SpeedCapacity::SpeedCapacity(int level = 0) : Capacity(level) 
{
}

SpeedCapacity::~SpeedCapacity()
{
}

void SpeedCapacity::updateValue()
{
	mValue = 1 + mLevel;
}
