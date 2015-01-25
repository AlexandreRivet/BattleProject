#include "ArmorCapacity.h"


ArmorCapacity::ArmorCapacity() : Capacity()
{
}

ArmorCapacity::ArmorCapacity(int level = 0) : Capacity(level)
{
}


ArmorCapacity::~ArmorCapacity()
{
}

void ArmorCapacity::updateValue()
{
	mValue = mLevel * 2;
}
