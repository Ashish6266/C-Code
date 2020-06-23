#include <iostream>

using namespace std;

int main(void)
{
	short int A = 0;
	short int B = A + 1;
	short int C = A + B;
	short int D = B + C;
	short int E = C + D;
	short int F = D + E;
	short int G = E + F;
	short int H = F + G;
	short int I = G + H;
	short int J = H + I;
	short int K = I + J;

	cout << "Fibonacci " << A << endl << endl;
	cout << "Fibonacci " << B << endl << endl;
	cout << "Fibonacci " << C << endl << endl;
	cout << "Fibonacci " << D << endl << endl;
	cout << "Fibonacci " << E << endl << endl;
	cout << "Fibonacci " << F << endl << endl;
	cout << "Fibonacci " << G << endl << endl;
	cout << "Fibonacci " << H << endl << endl;
	cout << "Fibonacci " << I << endl << endl;
	cout << "Fibonacci " << J << endl << endl;
	cout << "Fibonacci " << K << endl << endl;
}