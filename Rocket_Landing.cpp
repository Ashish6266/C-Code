#include <iostream>
#include <iomanip>
using namespace std;

void reportStatus(ostream &os, double time, double height, double velocity, double fuel, string name)
{

}

int main(void)

{

	double g = -1.63;
	double a = 1000;
	double v = 50;
	double s = 0;
	double fuel_amount = 150;
	double fuel;
	double d;
	char instructions;

	cout << "Do you want instructions (y/n)?";
	cin >> instructions;

	if (instructions == 'y')
	{
		cout << "LUNAR LANDER INSTRUCTIONS \n"
			"You are landing on the moon and have taken over manual \n"
			"control 1000 feet above a good landing spot.You have a \n"
			"downward velocity of 50 feet / sec.  150 units of fuel remain. \n \n"

			"Here are the rules that govern your $SPACECRAFT space - craft: \n"
			"(1) After each second, the height, velocity, and remaining \n"
			"fuel will be reported via DIGBY, your on - board computer. \n"
			"(2) After each report, enter the number of units of fuel you \n"
			"wish to burn during the next second.Each unit of fuel \n"
			"will slow your descent by 1 foot / sec. \n"
			"(3) The maximum thrust of your engine is 30 feet / sec / sec or \n"
			"0 units of fuel per second. \n"
			"(4) When you contact the lunar surface, your descent engine \n"
			"will automatically shut down and you will be given a \n" 
			"report of your landing speed and remaining fuel. \n"
			"(5) If you run out of fuel, you will no longer be prompted \n"
			"to enter the number of units to burn each second.Your \n"
			"second by second reports will continue until you contact \n"
			"the lunar surface. \n \n";
	}

	cout << "Initial Velocity is " << v << endl;

	cout << "Enter Initial Alttitude " << a << endl;

	cout << "Enter the starting amount " << fuel_amount << endl;

	if (fuel_amount > 0)
	{

		cout << "The fuel is " << fuel_amount << " how much do want to burn " << endl;
		cin >> fuel;
	}

	if (fuel < 0 || fuel > fuel_amount)
	{
		cout << "Error. Invalid amount \n";
		cin >> fuel;

	}

	for (a; a > 0; a += 0)
	{
		fuel_amount = fuel_amount - fuel;
		a = a + v;
		d = -1.63 + .1*fuel;
		v = v + d;
		s++;

		cout << "The alttitude after " << s << " seconds is " << a << " meters" << endl;

		if (fuel_amount > 0)
		{

			cout << "The fuel is " << fuel_amount << " how much do want to burn " << endl;
			cin >> fuel;
		}

		else fuel = 0;

		if (fuel < 0 || fuel > fuel_amount)
		{
			cout << "Error. Invalid amount \n";
			cin >> fuel;

		}

	}
	cout << "The Alttitude is " << a << "m/s after " << s << " seconds. \n";
	cout << "The Velocity is " << v << "m/s after " << s << " seconds. \n";

	if (v > -2) cout << "We have crashed \n";
	if (v < -2) cout << "We have landed safely \n";

	return 0;
}

