#include <iostream>
using namespace std;
#include "Fraction.h"

int main() {
	setlocale(LC_ALL, "Rus");

	Fraction fraction1;

	fraction1.cinNumerator();
	fraction1.cinDivisor();

	int n;
	cout << "1 - Сложение\n2 - Вычитание\n3 - Умножение\n4 - Деление" << endl;
	cin >> n;
	switch (n)
	{
	case 1:
		fraction1.addition(fraction1.getNumerator(), fraction1.getDivisor());
		break;
	case 2:
		fraction1.subtraction(fraction1.getNumerator(), fraction1.getDivisor());
		break;
	case 3:
		fraction1.multiplication(fraction1.getNumerator(), fraction1.getDivisor());
		break;
	case 4:
		fraction1.division(fraction1.getNumerator(), fraction1.getDivisor());
		break;
	default:
		break;
	}
	return 0;
}