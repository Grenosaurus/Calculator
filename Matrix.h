/*
 Matrix calculator (Made: Jauaries).
*/


// C++ packets
#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <cmath>


class Matrix
{
private:
	double A[10][10], B[10][10]; // Matrix A and Matrix B
	double C[10][10]; // Matrix C
	int rowA, columnA; // row and column of matrix A
	int rowB, columnB; // row and column ofmatrix B
	char operation;

public:
	void calculatorMatrix(char operation)
	{
		int i, j, k; // Variables used in 'for' loop statement

		std::cout << "Enter rows & columns of matrix A: ";
		std::cin >> rowA >> columnA;

		std::cout << "Enter rows & columns of matrix B: ";
		std::cin >> rowB >> columnB;

		std::cout << "Enter the matrix A elements:" << std::endl;

		for (i = 0; i < rowA; i++)
		{
			for (j = 0; j < columnA; j++)
			{
				std::cout << "Enter the following row/column [ij => " << (i + 1) << (j + 1) << "]: ";
				std::cin >> A[i][j];
			}
		}

		std::cout << "Enter the matrix B elements:" << std::endl;

		for (i = 0; i < rowB; i++)
		{
			for (j = 0; j < columnB; j++)
			{
				std::cout << "Enter the following row/column [ij => " << (i + 1) << (j + 1) << "]: ";
				std::cin >> B[i][j];
			}
		}

		std::cout << "Mxtrix A:" << std::endl;

		for (i = 0; i < rowA; i++)
		{
			for (j = 0; j < columnA; j++)
			{
				std::cout << " " << A[i][j];

				if (j == columnA - 1)
					std::cout << std::endl;
			}
		}

		std::cout << "Mxtrix B:" << std::endl;

		for (i = 0; i < rowB; i++)
		{
			for (j = 0; j < columnB; j++)
			{
				std::cout << " " << B[i][j];

				if (j == columnB - 1)
					std::cout << std::endl;
			}
		}

		// Initializing result marix C to 0 (must be done)
		for (i = 0; i < rowA; i++)
		{
			for (j = 0; j < columnB; j++)
			{
				C[i][j] = 0;
			}
		}

		// Operation
		if (operation == '+')
		{
			for (i = 0; i < rowA; i++)
			{
				for (j = 0; j < columnB; j++)
				{
					for (k = 0; k < columnA; k++)
					{
						C[i][j] = A[i][k] + B[k][j];
					}
				}
			}

			// Output
			std::cout << "Mxtrix C (A + B):" << std::endl;

			for (i = 0; i < rowA; i++)
			{
				for (j = 0; j < columnB; j++)
				{
					std::cout << " " << C[i][j];

					if (j == columnB - 1)
						std::cout << std::endl;
				}
			}
		}

		if (operation == '-')
		{
			for (i = 0; i < rowA; i++)
			{
				for (j = 0; j < columnB; j++)
				{
					for (k = 0; k < columnA; k++)
					{
						C[i][j] = A[i][k] - B[k][j];
					}
				}
			}

			// Output
			std::cout << "Mxtrix C (A - B):" << std::endl;

			for (i = 0; i < rowA; i++)
			{
				for (j = 0; j < columnB; j++)
				{
					std::cout << " " << C[i][j];

					if (j == columnB - 1)
						std::cout << std::endl;
				}
			}
		}

		if (operation == '*')
		{
			for (i = 0; i < rowA; i++)
			{
				for (j = 0; j < columnB; j++)
				{
					for (k = 0; k < columnA; k++)
					{
						C[i][j] += A[i][k] * B[k][j];
					}
				}
			}

			// Output
			std::cout << "Mxtrix C (A * B):" << std::endl;

			for (i = 0; i < rowA; i++)
			{
				for (j = 0; j < columnB; j++)
				{
					std::cout << " " << C[i][j];

					if (j == columnB - 1)
						std::cout << std::endl;
				}
			}
		}
	}
};

