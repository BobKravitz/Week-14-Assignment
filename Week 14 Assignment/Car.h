#include "Vehicle.h"
#pragma once


class Car : public Vehicle
{
private:
	int doors;

public:

	Car();

	Car(int x, string m, int y);

	void setDoors(int);

	int getDoors() const;

	virtual void displayInfo() const;

};