#include "AttackSpeedCapacity.h"


AttackSpeedCapacity::AttackSpeedCapacity() : Capacity(), mCurrentValue(mValue)
{
}

AttackSpeedCapacity::AttackSpeedCapacity(int level = 0) : Capacity(level), mCurrentValue(mValue)
{
}

AttackSpeedCapacity::~AttackSpeedCapacity()
{
}

void AttackSpeedCapacity::updateValue()
{
	mValue = 1000 / (mLevel + 1);
}
