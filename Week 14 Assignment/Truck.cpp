#include "Truck.h"



Truck::Truck() : Vehicle()
{
	towCap = 0;
	

}

Truck::Truck(double t, string m, int y) : Vehicle(m, y)
{
	towCap = t;

}

void Truck::setTowCap(double t)
{
	towCap = t;

}

double Truck::getTowCap() const
{
	return towCap;
}

void Truck::displayInfo() const
{
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << getTowCap() << endl;
}

