#include "Capacity.h"


Capacity::Capacity() : mLevel(0)
{
	updateValue();
}

Capacity::Capacity(int level = 0) : mLevel(level)
{
	updateValue();
}


Capacity::~Capacity()
{
}

void Capacity::upgrade()
{
	mLevel++;
	updateValue();
}

void Capacity::downgrade()
{
	if (mLevel > 0)
	{
		mLevel--;
		updateValue();
	}	
}

int Capacity::getLevel() const
{
	return mLevel;
}

float Capacity::getValue() const
{
	return mValue;
}
