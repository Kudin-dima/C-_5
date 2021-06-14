#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int x, y;
	int i, z, t, c, d;

	srand(time(0));

	int a, b;

	cout << "Введите количество строк и столбцов в массиве" << endl;
	cin >> a >> b;

	const int Row = a;
	const int Col = b;



	cout << "Введите максимум и минимум" << endl;
	cin >> x >> y;
	const int upperlim = x;
	const int lowerlim = y;

	t = 0;
	z = 0;

	int Matrix[Row][Col] = {};

	for (c = 0; c < Row; c++)
	{
		for (d = 0; d < Col; d++)
		{
			Matrix[c][d] = rand() % (x - y + 1);
			if (Matrix[c][d] < 10)
			{
				cout << Matrix[c][d] << "  | ";
			}
			else
			{
				cout << Matrix[c][d] << " | ";
			}
		}
		cout << endl;
	}

	cout << endl << endl;


	for (c = 0; c < Row; c++)
	{
		for (d = 0; d < Col; d++)
		{
			z += Matrix[c][d];
		}
		cout << endl;
		if (t < z)
		{
			t = z;
			i = c + 1;
		}
		z = 0;
	}
	cout << "В строке под номером " << i << " находится наибольшая сумма, равная " << t << endl;

	return 0;
}
