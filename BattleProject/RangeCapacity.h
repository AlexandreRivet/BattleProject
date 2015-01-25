#pragma once
#include "Capacity.h"

class RangeCapacity : Capacity
{
public:
	RangeCapacity();
	RangeCapacity(int);
	~RangeCapacity();

	void updateValue();
};

