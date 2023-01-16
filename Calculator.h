#pragma once
#include <iostream>
template <typename T,typename F>
class Calculator {
public:
	double Sum(T num1, F num2) {
		return num1 + num2;
	}
	double Sum(F num1, T num2) {
		return num1 + num2;
	}
	T Sum(T num1,T num2) {
		return num1 + num2;
	}
	F Sum(F num1, F num2) {
		return num1 + num2;
	}
	double Sub(T num1, F num2) {
		return num1 - num2;
	}
	double Sub(F num1, T num2) {
		return num1 - num2;
	}
	T Sub(T num1, T num2) {
		return num1 - num2;
	}
	F Sub(F num1, F num2) {
		return num1 - num2;
	}
	double Div(T num1, F num2) {
		if (num2 == 0)
			throw std::invalid_argument("Делить на ноль нельзя");
		return num1 / num2;
	}
	double Div(T num1, T num2) {
		if (num2 == 0)
			throw std::invalid_argument("Делить на ноль нельзя");
		return num1 / num2;
	}
	double Div(F num1, F num2) {
		if (num2 == 0)
			throw std::invalid_argument("Делить на ноль нельзя");
		return num1 / num2;
	}
	double Div(F num1, T num2) {
		if (num2 == 0)
			throw std::invalid_argument("Делить на ноль нельзя");
		return num1 / num2;
	}
	double miltyply(T num1, F num2) {
		return num1 * num2;
	}
	double miltyply(F num1, T num2) {
		return num1 * num2;
	}
	T miltyply(T num1, T num2) {
		return num1 * num2;
	}
	F miltyply(F num1, F num2) {
		return num1 * num2;
	}

};