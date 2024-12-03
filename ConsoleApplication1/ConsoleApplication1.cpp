#include <iostream>
using namespace std;
#include "Fraction.h"

void Fraction::setNumerator(int numerator) { this->numerator = numerator; }
int Fraction::getNumerator() { return numerator; }

void Fraction::setDivisor(int divisor) { this->divisor=divisor; }
int Fraction::getDivisor() { return divisor; }

void Fraction::cinNumerator() { //ввод числителя
	int n;
	cout << "Введите числитель: ";
	cin >> n;
	setNumerator(n);
}
void Fraction::cinDivisor() { //ввод знаменателя
	int n;
	cout << "Введите знаменатель: ";
	cin >> n;
	setDivisor(n);
}
void Fraction::addition(int numerator, int divisor) { cout << numerator + divisor; } //сложение
void Fraction::subtraction(int numerator, int divisor) { cout << numerator - divisor; } //вычитание
void Fraction::multiplication(int numerator, int divisor) { cout << numerator * divisor; } //умножение
void Fraction::division(int numerator, int divisor) { //деление
	if (divisor == 0) {
		cout << "Ошибка: деление на ноль невозможно.";
		return;
	}
	cout << numerator / divisor;
}