#pragma once
#include "Car.h"
class Motor : public Car {
private:
	int spareWheels;
	int helmets;

	int z = 20;
	int safetyrate() 
	{
		return z;
	}
public:
	void klaxon(int);
	void setSparewheels(int);
	int getSparewheels();
	float getTotalPrice();
};
