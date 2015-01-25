#pragma once
#include "Capacity.h"

class AttackSpeedCapacity : Capacity
{
public:
	AttackSpeedCapacity();
	AttackSpeedCapacity(int);
	~AttackSpeedCapacity();

	void updateValue();

protected:
	float mCurrentValue;
};

