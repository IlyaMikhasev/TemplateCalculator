#include <iostream>
#include "Calculator.h"
int main() {
	setlocale(LC_ALL, "Russian");
	Calculator<int, double> c1;
	try
	{
		std::cout<<c1.Sub(2, 2.3)<<'\n';
		std::cout << c1.miltyply(3.5, 2.1) << '\n';
		std::cout << c1.miltyply(5.1, 2) << '\n';
		std::cout << c1.Sum(2.7, 5.2) << '\n';
		std::cout << c1.Sum(4, 5) << '\n';
		std::cout << c1.Sub(2, 6) << '\n';
		std::cout << c1.Div(96, 2.5) << '\n';
		std::cout << c1.Div(1.5, 0) << '\n';
	}
	catch (const std::exception& e)
	{
		std::cout<< "Îøèáêà: " << e.what() << std::endl;
	}
	return 0;
}