#include "Car.h"

Car::Car() : Vehicle() //Default constructor that also uses the vehicle default constructor.
{
	doors = 0;
	
}

Car::Car(int x, string m, int y) : Vehicle(m, y)//Constructor that also uses the vehicle constructor.
{
	doors = x;
	
}

void Car::setDoors(int x)//This function sets the number of doors on the car; it is a mutator.
{

	doors = x;
}

int Car::getDoors() const//This function returns the number of doors and is a accessor.
{
	return doors;

}

 void Car::displayInfo() const//This function displays all of the car information by using the dispayInfo function inherited from the vehicle class.
{
	Vehicle::displayInfo();
	cout << "Number of Doors: " << getDoors() << endl;


}