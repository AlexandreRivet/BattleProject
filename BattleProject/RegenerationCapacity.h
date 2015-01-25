#pragma once
#include "Capacity.h"

class RegenerationCapacity : Capacity
{
public:
	RegenerationCapacity();
	RegenerationCapacity(int);
	~RegenerationCapacity();

	void updateValue();
};

