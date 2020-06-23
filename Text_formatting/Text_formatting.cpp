#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

void outCentre(string s, int n, ofstream& myfile){
	int i;
	int spaces;
	if (n>80){
		myfile << "the string length exceeds the available length.. can not be print at the centre" << endl;
		return;
	}
	else{
		spaces = (80 - n) / 2;
		for (int i = 0; i<spaces; i++){
			myfile << " ";
		}
		myfile << s;
		for (int i = 0; i<spaces; i++){
			myfile << " ";
		}
		myfile << endl;
	}
}

void sectionheader(int num, ofstream& myfile)
{
	
	myfile << num << ".  ";
}

int main()
{
	string filename;
	string line;
	string user_input;
	int n = 1;
	int num = 0;
	cout << "Enter Name of File \n";
	cin >> filename;
	ifstream file(filename);
	ofstream myfile;
	cout << "Enter Name of new file \n";
	cin >> user_input;
	myfile.open(user_input);
	myfile << endl << endl << endl << endl << endl;
	bool state = false;
	int found;

	while (n <= 56)
	{
		getline(file, line);

		if (state == true){
			num++;
			// print the line in the center
			outCentre(line, line.length(), myfile);
			sectionheader(num, myfile);
		}

		found = line.find(".se");
		if (!state && !found != string::npos)myfile << line << endl;
		
		state = false;

		if (found != string::npos){
			state = true;
		}

		++n;
	}
	myfile << endl << endl;
	myfile << "Page 1";
	myfile << endl << endl;
	while (n <= 133)
	{
		{
			getline(file, line);

			if (state == true){
				num++;
				// print the line in the center
				outCentre(line, line.length(), myfile);
				sectionheader(num, myfile);
			}

			found = line.find(".se");
			if (!state && !found != string::npos)myfile << line << endl;

			state = false;

			if (found != string::npos){
				state = true;
			}

			++n;
		}
	}
	file.close();

	return 0;
}
