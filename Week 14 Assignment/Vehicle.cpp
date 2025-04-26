#include "Vehicle.h"

Vehicle::Vehicle()
{
	manufacturer = "";
	year = 0;
}
Vehicle::Vehicle(string m, int y)
{
	manufacturer = m;
	year = y;
}

void Vehicle::setManufacturer(string m)
{
	manufacturer = m;
}

void Vehicle::setYear(int y)
{
	year = y;
}

string Vehicle::getManufacture()const
{
	return manufacturer;
}

int Vehicle::getYear()const
{
	return year;
}

void Vehicle::displayInfo()const
{
	cout << "Manufacturer: " << manufacturer << endl << "Year: " << year << endl;
}