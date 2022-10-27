﻿// Lab_04_5.cpp
// Лазар Владислав
// Лабораторна робота No 4.5
// «Попадання» у плоску фігуру
// Варіант 11

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x, y, R;

	srand((unsigned)time(NULL));

	cout << "R = "; cin >> R;

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if (x <= 0 && y <= 0 && y >= -x - R || x >= 0 && abs(x) < abs(R) && y <= sqrt(R * R - x * x))
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	};

	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = 6. * rand() / RAND_MAX - R;
		y = 6. * rand() / RAND_MAX - R;

		if (x <= 0 && y <= 0 && y >= -x - R || x >= 0 && abs(x) < abs(R) && y <= sqrt(R * R - x * x))
		{
			cout << setw(8) << setprecision(4) << x << " "
				 << setw(8) << setprecision(4) << y << " " << "yes" << endl;
		}
		else
		{
			cout << setw(8) << setprecision(4) << x << " "
				 << setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	}

	return 0;
}