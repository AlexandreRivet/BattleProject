#include "RegenerationCapacity.h"


RegenerationCapacity::RegenerationCapacity() : Capacity()
{
}

RegenerationCapacity::RegenerationCapacity(int level = 0) : Capacity(level)
{
}


RegenerationCapacity::~RegenerationCapacity()
{
}

void RegenerationCapacity::updateValue()
{
	mValue = mLevel * 3;
}
