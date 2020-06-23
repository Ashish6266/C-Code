#include <iostream>
#include <iomanip>
using namespace std;

double randomfunction(void)
{
	double r;
	r = (((double)rand() / (RAND_MAX + 2)) * 2) - 1;
		return r;
	
}
double radiusfunction(double x, double y, double radius, double theta)
{
	radius = sqrt(pow(x, 2) + pow(y, 2));
	//cout << "(" << radius;
	return radius;
}

double thetafunction(double x, double y, double radius, double theta)
{
	theta = atan(y / x);
	//cout << ", " << theta << ") \n";
	return theta;
}

int main()
{
	double d, above =0, below = 0;
	double x, y, radius, theta;
	d = 1;
	while (d <= 100000)
	{
		x = randomfunction();
		y = randomfunction();
		theta = 0;
		radius = 0;
		radius = radiusfunction(x, y, radius, theta); 
		theta = thetafunction(x, y, radius, theta);
		if (radius <= 1)
		{
			above++;
		}
		else below++;
		d++;
	}
	cout << above << ":" << below << endl;
	double const pi = 4 * (above / (above + below));
	cout << pi << endl;

	return 0;
}

