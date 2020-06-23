#include <iostream> 
using namespace std;

int main()
{
	int grade;

	cout << "What grade did you make? ";
	cin >> (grade);

	if (grade < 0 || grade > 100)
		cout << "Invalid Grade Entered \n";

	if (grade == 100)
		cout << "Congratulations, you got a perfect score: A+ \n";

	else if (grade >= 97)
		cout << "A+ \n";

	else if (grade >= 94)
		cout << "Very good: A \n";

	else if (grade >= 90)
		cout << "A- \n";

	else if (grade >= 87)
		cout << "B+ \n";

	else if (grade >= 84)
		cout << "Good job: B \n";

	else if (grade >= 80)
		cout << "B- \n";

	else if (grade >= 77)
		cout << "C+ \n";

	else if (grade >= 74)
		cout << "Not bad: C \n";

	else if (grade >= 70)
		cout << "C- \n";

	else if (grade >= 67)
		cout << "D+ \n";

	else if (grade >= 64)
		cout << "Not so good: D \n";

	else if (grade >= 60)
		cout << "D-";
	
	else if (grade >= 0)
		cout << "We need to talk: F \n";

	return 0;
}