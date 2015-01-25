#pragma once
#include <vector>

#include "Capacity.h"
#include "SpeedCapacity.h"
#include "HealthCapacity.h"
#include "ArmorCapacity.h"
#include "RegenerationCapacity.h"
#include "DamageCapacity.h"
#include "RangeCapacity.h"
#include "AttackSpeedCapacity.h"

#include "Point.h"

class Unit
{
public:
	Unit();
	~Unit();

	int getId() const;
	int getLevel() const;
	Point& getPosition();

	SpeedCapacity& getSpeed();
	HealthCapacity& getHealth();
	ArmorCapacity& getArmor();
	RegenerationCapacity& getRegeneration();
	DamageCapacity& getDamage();
	RangeCapacity& getRange();
	AttackSpeedCapacity& getAttackSpeed();
	Capacity& operator[] (int i);


	void refresh();
	void setPosition();
	bool shoot();
	void takeDamage(float);
	bool isAlive();

private:
	int mID;
	std::vector<Capacity> mCapacities;
	Point mPosition;

};

