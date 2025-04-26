
#include <string>
#include <iomanip>
#include <iostream> 
#include <cstdlib>
using namespace std;

#ifndef VEHICLE_H//Include guard.
#define VEHICLE_H

class Vehicle
{
private:
	string manufacturer;//All private members.
	int year;
	
public:

	Vehicle();//Default constructor.
	
	Vehicle(string m, int y);//Constructor.
	

	void setManufacturer(string m);//All function prototypes
	void setYear(int y);
	string getManufacture()const;
	int getYear()const;
	void displayInfo()const;
	
};

#endif
