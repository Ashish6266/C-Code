#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	long int fluid_ounces;
	long int barrel;
	long int gallon;
	long int quart;
	long int pint;
	long int cups;
	long int gills;
	long int teaspoons;
	long int remainder;

	cout << "How many fluid ounces do you have? ";
	cin >> fluid_ounces;

	barrel = fluid_ounces / 5376;
	fluid_ounces = fluid_ounces % 5376;
		 
	gallon = fluid_ounces / 128;
	fluid_ounces = fluid_ounces % 128;

	quart = fluid_ounces / 32;
	fluid_ounces = fluid_ounces % 32;

	pint = fluid_ounces / 16;
	fluid_ounces = fluid_ounces % 16;

	cups = fluid_ounces / 8;
	fluid_ounces = fluid_ounces % 8;

	gills = fluid_ounces / 4;
	fluid_ounces = fluid_ounces % 4;

	teaspoons = fluid_ounces * 2;
	fluid_ounces = fluid_ounces % 2;

	cout << "fluid ounces can be divided into: " << barrel;

	cout << " barrel(s) " << endl;

	cout << "fluid ounces can be divided into: " << gallon;

	cout << " gallons(s)" << endl;

	cout << "fluid ounces can be divided into: " << quart;

	cout << " quart(s)" << endl;

	cout << "fluid ounces can be divided into: " << pint;

	cout << " pint(s)" << endl;

	cout << "fluid ounces can be divided into: " << cups;

	cout << " cup(s)" << endl;

	cout << "fluid ounces can be divided into: " << gills;
	
	cout << " gills(s)" << endl;

	cout << "fluid ounces can be divided into: " << teaspoons;

	cout << " teaspoons(s)" << endl;
	


}