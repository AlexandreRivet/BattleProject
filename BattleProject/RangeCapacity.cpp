#include "RangeCapacity.h"


RangeCapacity::RangeCapacity() : Capacity()
{
}

RangeCapacity::RangeCapacity(int level = 0) : Capacity(0)
{
}

RangeCapacity::~RangeCapacity()
{
}

void RangeCapacity::updateValue()
{
	mValue = 10 + mLevel * 2;
}
