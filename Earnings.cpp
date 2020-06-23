#include <iostream>
#include <iomanip> 

using namespace std;



int main(void)

{

	const float yearOne = 100000.0 * 100000.0;

	const float yearTwo = 3.0;

	const float yearThree = -1.0e10;

	const float yearFour = 5.0e0;



	float average = (yearOne + yearThree+ yearTwo + yearFour) / 4;
	



	cout << "1998 earnings were:   $" << setprecision (2) << fixed << yearOne << endl;

	cout << "1999 earings were:    $" << setprecision (2) << fixed << yearTwo << endl;

	cout << "2000 earnings were:   $" << yearThree << endl;

	cout << "2001 earnings were:   $" << yearFour << endl;

	cout << "Average earnings was: $" << average << endl;



	return 0;

}







