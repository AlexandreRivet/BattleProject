#include "HealthCapacity.h"


HealthCapacity::HealthCapacity() : Capacity(), mCurrentValue(mValue)
{
}

HealthCapacity::HealthCapacity(int level = 0) : Capacity(level), mCurrentValue(mValue)
{
}

HealthCapacity::~HealthCapacity()
{
}

void HealthCapacity::updateValue()
{
	mValue = (1 + mLevel) * 10;
}