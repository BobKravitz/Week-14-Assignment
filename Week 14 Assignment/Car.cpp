#include "Car.h"




Car::Car() : Vehicle()
{
	doors = 0;
	
}

Car::Car(int x, string m, int y) : Vehicle(m, y)
{
	doors = x;
	
}

void Car::setDoors(int x)
{

	doors = x;
}

int Car::getDoors() const
{
	return doors;

}

 void Car::displayInfo() const
{
	Vehicle::displayInfo();
	cout << "Number of Doors: " << getDoors() << endl;


}