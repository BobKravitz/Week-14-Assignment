#include "Vehicle.h"

#ifndef CAR_H//Include guard.
#define CAR_H


class Car : public Vehicle//This class inherits from the vehicle class
{
private:
	int doors;//The member variable unique to the car class.

public:

	Car();//Default constructor.

	Car(int x, string m, int y);//Constructor.

	void setDoors(int);//All function prototypes.
	int getDoors() const;
	void displayInfo() const;

};
#endif