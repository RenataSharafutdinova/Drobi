#pragma once
class Fraction {

	int numerator; //���������
	int divisor; //�����������
public:
	void setNumerator(int numerator);
	int getNumerator();

	void setDivisor(int divisor);
	int getDivisor();

	void cinNumerator();
	void cinDivisor();

	void addition(int numerator, int divisor);
	void subtraction(int numerator, int divisor);
	void multiplication(int numerator, int divisor);
	void division(int numerator, int divisor);
};