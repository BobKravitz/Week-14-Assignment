#include "Vehicle.h"

Vehicle::Vehicle()//Default Constructor.
{
	manufacturer = "";
	year = 0;
}
Vehicle::Vehicle(string m, int y)//Constructor.
{
	manufacturer = m;
	year = y;
}

void Vehicle::setManufacturer(string m)//This function sets the manufacturer.
{
	manufacturer = m;
}

void Vehicle::setYear(int y)//This function sets the year that the vehicle was built.
{
	year = y;
}

string Vehicle::getManufacture()const//This function returns the manufacturer and is a accessor.
{
	return manufacturer;
}

int Vehicle::getYear()const//This function returns the year that the vehicle was built and is a accessor.
{
	return year;
}

void Vehicle::displayInfo()const//This function displays all the info in the vehicle class.
{
	cout << "Manufacturer: " << getManufacture() << endl << "Year Built: " << getYear() << endl;
}