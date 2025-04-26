/*	Name: Adam Neu
	Date: April 25, 2025
	Class: 1202 501
*/

#include <string>
#include <iomanip>
#include <iostream> 
#include <cstdlib>

#include "Car.h"//Inlcuding necessary files.
#include "Truck.h"

using namespace std;

int main()
{
	string manufacturer;//Variables that will be used to initialize class objects using their respective constructors.
	int yearBuilt, numberOfDoors;
	double towingCapacity;




	cout << "Vehicle Program\n\n";//This is where the user inputs their data for the vehicle, car, and truck classes.
	cout << "Vehicle:\nEnter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> yearBuilt;
	Vehicle firstVehicle(manufacturer, yearBuilt);//The data is stored into the vehicle object using the constructor.
	cout << "Vehicle Information:\n";
	firstVehicle.displayInfo();//Displaying the information using the displayInfo function.

	cout << "\nCar:\nEnter the manufacturer: ";
	cin.ignore();
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> yearBuilt;
	cout << "Enter the number of doors: ";
	cin >> numberOfDoors;
	Car firstCar(numberOfDoors, manufacturer, yearBuilt);//The data is stored into the car object using the car class constructor.
	cout << "Vehicle Information:\n";
	firstCar.displayInfo();//The information is displayed through the car's displayInfo function which also uses the vehicle class' displayInfo function.

	cout << "\nTruck:\nEnter the manufacturer: ";
	cin.ignore();
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> yearBuilt;
	cout << "Enter the towing capacity: ";
	cin >> towingCapacity;
	Truck firstTruck(towingCapacity, manufacturer, yearBuilt);//The data is stored into the truck object using the truck class constructor.
	cout << "Vehicle Information:\n";
	firstTruck.displayInfo();//The information is displayed through the truck class' displayInfo function which also uses the vehicle class' displayInfo function.



	system("pause");
	return 0;
}