#include "Vehicle.h"
#pragma once




class Truck : public Vehicle
{
private:
	double towCap;

public:

	Truck();

	Truck(double t, string m, int x);

	void setTowCap(double);

	double getTowCap() const;

	void displayInfo() const;







};