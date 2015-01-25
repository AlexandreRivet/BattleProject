#pragma once
#include "Capacity.h"

class SpeedCapacity : Capacity
{
public:
	SpeedCapacity();
	SpeedCapacity(int);
	~SpeedCapacity();

	void updateValue();
};

