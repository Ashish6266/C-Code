#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	// This is where I define to Variables

	long int Tuition_Amount = 0;
	long int Increase_in_Percentage;

	// This allows the user to enter information about thier tuition

	cout << "Enter tution here ";
	cin >> Tuition_Amount; 
	cout << "Enter Increase in percentage here ";
	cin >> Increase_in_Percentage;

	// This is the formulas used to calculate the tuitions for each year

	double total_tuition = 0;
	double Rate = Increase_in_Percentage / 100.0 + 1.0;
	double Second_Years_Tuition = Tuition_Amount * Rate + Tuition_Amount;
	double Third_Years_Tuition = Tuition_Amount * Rate + Second_Years_Tuition;
	double Fourth_Years_Tuition = Tuition_Amount * Rate + Third_Years_Tuition;
	double Fifth_Years_Tuition = Tuition_Amount * Rate + Fourth_Years_Tuition;
	
	// This outputs all the tuiton amounts onto the screen

	cout << "First years tuition " << Tuition_Amount << endl;
	cout << "Second years tuition " << Second_Years_Tuition << endl;
	cout << "Third years tuition " << Third_Years_Tuition << endl;
	cout << "Fourth years tuition " << Fourth_Years_Tuition << endl;
	cout << "Fifth years tuition " << Fifth_Years_Tuition << endl;

}