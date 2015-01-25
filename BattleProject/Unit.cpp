#include "Unit.h"


Unit::Unit()
{
}


Unit::~Unit()
{
}

int Unit::getId() const
{
	return mID;
}

int Unit::getLevel() const
{									
	int globalLevel = 0;
	int size = mCapacities.size();
	Capacity c;

	for (int i = 0; i < size; ++i)
		globalLevel += mCapacities[i].getLevel();

	return globalLevel;
}

Point& Unit::getPosition()
{
	return mPosition;
}

Capacity& Unit::operator[] (int i)
{
	if (i < 0 || i >= mCapacities.size())
		return;

	return mCapacities[i];
}

SpeedCapacity& Unit::getSpeed()
{
	return (SpeedCapacity&)(*this)[0];
}

HealthCapacity& Unit::getHealth()
{
	return (HealthCapacity&)(*this)[1];
}

ArmorCapacity& Unit::getArmor()
{
	return (ArmorCapacity&)(*this)[2];
}

RegenerationCapacity& Unit::getRegeneration()
{
	return (RegenerationCapacity&)(*this)[3];
}

DamageCapacity& Unit::getDamage()
{
	return (DamageCapacity&)(*this)[4];
}

RangeCapacity& Unit::getRange()
{
	return (RangeCapacity&)(*this)[5];
}

AttackSpeedCapacity& Unit::getAttackSpeed()
{
	return (AttackSpeedCapacity&)(*this)[6];
}

void Unit::refresh()
{

}

void Unit::setPosition()
{

}

bool Unit::shoot()
{
	AttackSpeedCapacity asc = (AttackSpeedCapacity&)mCapacities[6];
	/*
	if (true)
	{
		return true;
	} 
	else 
	{
		return false;
	}
	*/
}

void Unit::takeDamage(float damage)
{

}

bool Unit::isAlive()
{

}