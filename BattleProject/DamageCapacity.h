#pragma once
#include "Capacity.h"

class DamageCapacity : Capacity
{
public:
	DamageCapacity();
	DamageCapacity(int);
	~DamageCapacity();

	void updateValue();
};

