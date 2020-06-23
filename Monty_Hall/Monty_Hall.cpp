#include <iomanip>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <time.h>
#include <iostream>
#include <stdio.h>     
#include <stdlib.h>
using namespace std;

void setupDoors(char &door1, char &door2, char &door3)
{
	int x;

	x = rand() % 3;

	if (x == 0)
	{
		door1 = 'C';
		door2 = 'G';
		door3 = 'G';
	}

	if (x == 1)
	{
		door2 = 'C';
		door1 = 'G';
		door3 = 'G';
	}

	if (x == 2)
	{
		door3 = 'C';
		door1 = 'G';
		door2 = 'G';
	}

}

void pickDoorChoices(char door1, char door2, char door3, int &doorPlayer, int &doorMonty)
{
	doorPlayer = rand() % 3 + 1;


	if (door2 != 'C' && door3 != 'C')
		do{
			doorMonty = rand() % 2 + 2;
		} while (doorMonty == doorPlayer);



		if (door1 != 'C' && door3 != 'C')
			do {
				doorMonty = rand() % 2;
				if (doorMonty == 0)
				{
					doorMonty = 1; 
				}
				else
					doorMonty = 3; 
			} while (doorMonty == doorPlayer);

			if (door1 != 'C' && door2 != 'C')
				do {
					doorMonty = rand() % 2 + 1;
				} while (doorMonty == doorPlayer);


}

void switchfunction(char &door1, char &door2, char &door3, int &doorPlayer, int &doorMonty)
{
	if (doorPlayer == 1 && doorMonty == 2)
		doorPlayer = 3;
	if (doorPlayer == 3 && doorMonty == 2)
		doorPlayer = 1;
	if (doorPlayer == 2 && doorMonty == 1)
		doorPlayer = 3;
	if (doorPlayer == 3 && doorMonty == 1)
		doorPlayer = 2;
	if (doorPlayer == 1 && doorMonty == 3)
		doorPlayer = 2;
	if (doorPlayer == 2 && doorMonty == 3)
		doorPlayer = 1;


}

int main(){
	char door1 = 0, door2 = 0, door3 = 0;
	int x = 0, doorPlayer = 0, doorMonty = 0;
	srand(time(NULL));

	int win = 0;
	int win_after = 0;

	for (int i = 0; i < 10000; i++)
	{
		setupDoors(door1, door2, door3);
		pickDoorChoices(door1, door2, door3, doorPlayer, doorMonty);
		if (doorPlayer == 1 && door1 == 'C')
			win++;

		if (doorPlayer == 2 && door2 == 'C')
			win++;

		if (doorPlayer == 3 && door3 == 'C')
			win++;

		switchfunction(door1, door2, door3, doorPlayer, doorMonty);

		if (doorPlayer == 1 && door1 == 'C')
			win_after++;

		if (doorPlayer == 2 && door2 == 'C')
			win_after++;

		if (doorPlayer == 3 && door3 == 'C')
			win_after++;
	}

	cout << "Wins     Win %   Loses \n";
	cout << "---------------------- \n";
	cout << win << "\t|" << (float)win / 100 << "%" << "\t|" << 10000 - win << endl;
	cout << "---------------------- \n";
	cout << " After Switching Doors \n";
	cout << "---------------------- \n";
	cout << win_after << "\t|" << (float)win_after / 100 << "%" << "\t|" << 10000 - win_after << endl;
	cout << "---------------------- \n";

	return 0;
}
	