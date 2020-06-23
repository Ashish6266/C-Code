#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
// First Function
// This function contains the two equaions required to calculate the BAC of a female and male.
void computeBloodAlcoholConcentration(int drinks, int weight, int duration, double &maleBAC, double &femaleBAC)
{
	femaleBAC = (double)drinks / weight * 4.5 - ((double)duration / 40 * .01);
	if (femaleBAC < 0)
	{
		femaleBAC = 0.0;
	}
	maleBAC = (double)drinks / weight * 3.8 - ((double)duration / 40 * .01);
	if (maleBAC < 0)
	{
		maleBAC = 0.0;
	}
}
// Second Function
// This function contains the different messages that are connected to the different BACs
string impairment(double bac)
{
	const double safe = 0.00;
	const double someImpairment = 0.04;
	const double significantAffected = 0.08;
	const double someCriminalPenalties = 0.10;
	const double deathPossible = 0.30;
	const string SAFE = "Safe To Drive";
	const string SOMEIMPAIR = "Some Impairment";
	const string SIGNIFICANT = "Driving Skills Significantly Affected";
	const string MOST_STATES = "Criminal Penalties in Most US States";
	const string ALL_STATES = "Legally Intoxicated - Criminal Penalties in All US States";
	const string YOURE_DEAD = "Death is Possible!";

	if (bac <= safe)
	{
		return SAFE;
	}
	if (bac > safe && bac < someImpairment)
	{
		return SOMEIMPAIR;
	}
	if (bac >= someImpairment && bac < significantAffected)
	{
		return SIGNIFICANT;
	}
	if (bac >= significantAffected && bac < someCriminalPenalties)
	{
		return MOST_STATES;
	}
	if (bac >= someCriminalPenalties && bac <= deathPossible)
	{
		return ALL_STATES;
	}
	if (bac > deathPossible)
	{
		return YOURE_DEAD;
	}
}
// Third Function Part 1
// this function is for setting the parameters for the weight and duration entered
int promptForInteger(string const &message, int lower, int upper)
{
	cout << message;
	int integer;
	cin >> integer;
	while (true){
		if (integer >= lower && integer <= upper){
			return integer;
		}
	}
}
// Third Function Part 2
// this function takes the answar inputed by user and prints it back out for the male or female question
char promptForMorF(string const &message)
{
	cout << message;
	char morf;
	cin >> morf;
	return morf;
}
// Third Function Part 3
// This function is a for loop that takes the calculation for the BAC of the male and female and prints it out 10 times
void showImpairmentChart(int weight, int duration, bool isMale)
{
	for (int drinks = 0; drinks < 11; drinks++)
	{
		double maleBAC, femaleBAC;
		computeBloodAlcoholConcentration(drinks, weight, duration, maleBAC, femaleBAC);

		if (isMale == true)
		{
			cout << "\t" << drinks << " " << setprecision(3) << fixed << maleBAC << " " << impairment(maleBAC) << endl;
		}
		else
		{
			cout << "\t" << drinks << " " << setprecision(3) << fixed << femaleBAC << " " << impairment(femaleBAC) << endl;
		}

	};
};
// Main function
// This is where the three question are prompted about the weight, drink, 
int main()
{
	int weight = promptForInteger("Enter your weight ", 50, 500);

	int duration = promptForInteger("Time since last drink? ", 0, 1440);

	char morf = promptForMorF("M (male) or F (female) ");

	bool isMale;

	string gender;
	// this if and else if statment checks if the user entered M or F and uses the right equation according to what the user inputs
	if (morf == 'M')
	{
		gender = "Male";
		isMale = true;
	}
	else if (morf == 'F')
	{
		gender = "Female";
		isMale = false;
	}
	// this just displays the information at the top about the weight, gender and duration
	cout << weight << " pounds, " << gender << ", " << duration << " minutes since last drink \n";
	cout << "# drink" << "   BAC Status" << endl;

	showImpairmentChart(weight, duration, isMale);

	return 0;
}
