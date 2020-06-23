#include <iostream>
#include <iomanip>
#include <string>

int makeCheckDigit(int);
std::string barCode(int);
std::string convertDigit(int);
using namespace std;

// First Function
int makeCheckDigit(int x)
{
	int check = 0;
	int n;
	int digit1, digit2, digit3, digit4, digit5;

	digit1 = x / 10000;
	x %= 10000;
	digit2 = x / 1000;
	x %= 1000;
	digit3 = x / 100;
	x %= 100;
	digit4 = x / 10;
	x %= 10;
	digit5 = x / 1;

	n = digit1 + digit2 + digit3 + digit4 + digit5;

	for (n; n % 10 != 0; n++)
	{
		check++;
	}
	return check;
}
// Second Function
std::string convertDigit(int digit)
{
	if (digit == 0)
		return  "||:::";

	else if (digit == 1)
		return ":::||";

	else if (digit == 2)
		return "::|:|";

	else if (digit == 3)
		return "::||:";

	else if (digit == 4)
		return ":|::|";

	else if (digit == 5)
		return ":|:|:";

	else if (digit == 6)
		return ":||::";

	else if (digit == 7)
		return "|:::|";

	else if (digit == 8)
		return "|::|:";

	else if (digit == 9)
		return "|:|::";

	else
		return "Invalid";
}
// Third Function
std::string barCode(int digit)
{
	int num1, num2, num3, num4, num5, num6;
	string barcode, barcode1, barcode2, barcode3, barcode4, barcode5, barcode6;

	num6 = makeCheckDigit(digit);

	num1 = digit / 10000;
	digit %= 10000;
	num2 = digit / 1000;
	digit %= 1000;
	num3 = digit / 100;
	digit %= 100;
	num4 = digit / 10;
	digit %= 10;
	num5 = digit / 1;

	barcode1 = convertDigit(num1);
	barcode2 = convertDigit(num2);
	barcode3 = convertDigit(num3);
	barcode4 = convertDigit(num4);
	barcode5 = convertDigit(num5);
	barcode6 = convertDigit(num6);
	barcode = barcode1 + barcode2 + barcode3 + barcode4 + barcode5 + barcode6;

	return barcode;
}
// Main Function
int main()
{

	int Zip_Code;
	string barcode;

	cout << "Enter Zip Code \n";
	cin >> Zip_Code;

	if (Zip_Code < 0)
		cout << "error negative number \n" << terminate;

	barcode = barCode(Zip_Code);

	cout << barcode << endl;

	return 0;
}


