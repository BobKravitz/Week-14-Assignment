
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>
#include <random>
#include <iostream> 
#include <fstream> 
#include <cstdlib>
using namespace std;

#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle
{
private:
	string manufacturer;
	int year;
	
public:

	Vehicle();
	
	Vehicle(string m, int y);
	

	void setManufacturer(string m);
	
	
	void setYear(int y);
	

	string getManufacture()const;
	

	int getYear()const;
	

	virtual void displayInfo()const;
	

};

#endif
