#pragma once
#include "Capacity.h"

class HealthCapacity : Capacity
{
public:
	HealthCapacity();
	HealthCapacity(int);
	~HealthCapacity();

	void updateValue();

protected:
	float mCurrentValue;

};

