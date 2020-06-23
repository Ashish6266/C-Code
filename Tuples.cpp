#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>

using namespace std;

void alphabet(char start, char end, int size, string p = "")
{
	if (size == 0)
		cout << p << ", ";
	else {
		for (char x = start; x <= end; x++)
		{
			alphabet(start, end, size - 1, p + x);
		}
	}
}

int main()
{
	string p;
	char start, end;
	int size;

	cout << "Input the first letter \n";
	cin >> start;
	cout << "input the second letter \n";
	cin >> end;
	cout << "Input the size for the tupple \n";
	cin >> size;

	cout << "{";
	alphabet(start, end, size);
	cout << "}" << endl;


	return 0;
}