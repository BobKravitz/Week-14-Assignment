#include "Vehicle.h"

#ifndef TRUCK_H//Include guard.
#define TRUCK_H

class Truck : public Vehicle//This class inherits from the vehicle class.
{
private:
	double towCap;//This member variable is unique to the truck class.

public:

	Truck();//Default Constructor

	Truck(double t, string m, int x);//Another constructor

	void setTowCap(double);//All function prototypes.
	double getTowCap() const;
	void displayInfo() const;


};
#endif