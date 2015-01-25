#pragma once
class Capacity
{
public:
	Capacity();
	Capacity(int);
	~Capacity();

	int getLevel() const;
	float getValue() const;

	void upgrade();
	void downgrade();

	virtual void updateValue();

protected:
	int mLevel;
	float mValue;
};

