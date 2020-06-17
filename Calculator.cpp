/*
 Calculator program (Made:Jauaries).
*/


// C++ packets
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <numeric>
#include <vector>
#include "Calculator.h" // Normal Calculator
#include "Matrix.h" // Matrix calculator



int main()
{
	char choise, operation;

	choise = 'n';
	operation = '+';

	std::cout << "Matrix calculator or Normal calculator: ";
	std::cin >> choise;

	if (choise == 'n')
	{
		std::cout << "Welcome to Normal Calculator!" << std::endl;

		double x, y, result;
		x = y = result = 0.0;

		std::cout << "Eneter the frist number: ";
		std::cin >> x;

		std::cout << "Eneter second number: ";
		std::cin >> y;

		std::cout << "Select te operator (| '+' | '-' | '*' | '/' | '^' |): ";
		std::cin >> operation;
		
		Calculator calculator;

		result = calculator.calculatorNormal(x, y, operation);

		if (operation == '_')
		{
			operation = '-';
		}

		std::cout << "Result: " << x << operation << y << " = " << result << std::endl;

	}
	
	if (choise == 'm')
	{
		std::cout << "Wlecome to Matrix Calculator!" << std::endl;

		std::cout << "Select te operator (| '+' | '-' | '*' |): "; // TODO: include transpose and inverse multiplication
		std::cin >> operation;

		if (operation == '_')
		{
			operation = '-';
		}

		Matrix matrix;

		matrix.calculatorMatrix(operation); // Prints a matrix output (more specific in 'Matrix.h')
		
	}

	/*
	 TODO: Include trigonometrical functioning into the calculator (sin, cos, tan, ..).
	*/
	
	return 0;
}