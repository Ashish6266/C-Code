#include <iostream>
#include <string>

char encryption1(char, int);
char decryption1(char, int);

char encryption2(char, int);
char decryption2(char, int);

char encryption3(char);
char decryption3(char);

using namespace std;

char encryption1(char map, int wheelPos1)
{
	return ((7 * wheelPos1 + (25 - (map))) % 26);
}

char decryption1(char deEncrypt, int wheelPos1)
{
	return 25 - (deEncrypt + 7 * (26 - wheelPos1)) % 26;
}
x = rand() % 10 + 1

char encryption2(char encrypt, int wheelPos2)
{

	return (encrypt + (23 * wheelPos2)) % 26;
}

char decryption2(char deEncrypt, int wheelPos2)
{

	return (deEncrypt + (23 * (26 - wheelPos2))) % 26;
}

char encryption3(char encrypt)
{
	if (encrypt < 13)
	{
		return (2 * encrypt) + 1;

	}
	else
	{
		return 2 * (encrypt - 13);
	}

}

char decryption3(char map)
{
	if (map % 2 == 0)
	{
		return (map / 2) + 13;

	}
	else
		return (map - 1) / 2;
}

int main()
{
	int wheelPos1;
	int wheelPos2;
	char Input;
	char encrypt;
	char deEncrypt;
	bool end = false;
	bool less_than = false;

	cout << "Enter initial position of Wheel 1 : ";
	cin >> wheelPos1;

	cout << "Enter initial position of Wheel 2 : ";
	cin >> wheelPos2;


	do
	{

		cout << "Enter a character to encrypt : ";
		cin >> Input;

		if (Input == '$')
		{
			end = true;
		}

		else if (islower(Input))
		{
			cout << "#" << endl;
		}

		else if (isupper(Input))
		{
			cout << Input << endl;
		}

		char map = Input - 65;

		encrypt = encryption1(map, wheelPos1);

		encrypt = encryption2(encrypt, wheelPos2);

		encrypt = encryption3(encrypt);

		deEncrypt = decryption3(encrypt);

		deEncrypt = decryption2(deEncrypt, wheelPos2);

		deEncrypt = decryption1(deEncrypt, wheelPos1);

		cout << (char)(deEncrypt + 65) << endl;

		cout << less_than << endl;
		cout << Input << " Encrypts to " << (char)(encrypt + 65) << endl << " The original letter decrypts back to ";

		wheelPos1++;


	}

 while (!end);

return 0;

}