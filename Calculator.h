/*
 Normal calculator (Made: Jauaries).
*/


// C++ packets
#include <cmath>
#include <iostream>


class Calculator
{
private:
	double x, y, ans;
	double sum, minus, multiplication, divide, power;
	char operation;

public:
	double sumNormal(double x, double y)
	{
		sum = x + y;

		return sum;
	}

	double multiplicationNormal(double x, double y)
	{
		multiplication = x * y;

		return multiplication;
	}

	double divideNormal(double x, double y)
	{
		divide = x / y;

		return divide;
	}

	double minusNormal(double x, double y)
	{
		
		minus = x - y;

		return minus;
	}

	double powerNormal(double x, double y)
	{
		if (y < 0.5 || y > 0.5)
		{
			power = pow(x, y);
		}
		else
		{
			power = sqrt(x);
		}
		return power;
	}

	double calculatorNormal(double x, double y, char operation)
	{
		switch (operation)
		{
		case '+':
			ans = sumNormal(x, y);
			return ans;
		case '-':
		case '_':
			ans = minusNormal(x, y);
			return ans;
		case '*':
			ans = multiplicationNormal(x, y);
			return ans;
		case '/':
			ans = divideNormal(x, y);
			return ans;
		case '^':
			ans = powerNormal(x, y);
			return ans;
		default:
			return 0;
		}
	}
};

