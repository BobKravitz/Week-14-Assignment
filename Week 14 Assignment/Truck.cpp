#include "Truck.h"

Truck::Truck() : Vehicle()//This is the default constructor, and it utilizes the vehicle class default constructor.
{
	towCap = 0;

}

Truck::Truck(double t, string m, int y) : Vehicle(m, y)//This is another constructor, and it utilizes the other vehicle class constructor.
{
	towCap = t;

}

void Truck::setTowCap(double t)//This functions sets the towing capacity member variable; it is a mutator.
{
	towCap = t;

}

double Truck::getTowCap() const//This function returns the towing capacity; it is a accessor
{
	return towCap;
}

void Truck::displayInfo() const//This functions displays the information of the truck using the inherited displayInfo function from the vehicle class.
{
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << getTowCap() << endl;
}

