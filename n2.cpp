#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std; 
int main()
{
	setlocale(LC_ALL, "rus");

	int x, y, a = 0;


	srand(time(NULL));

	cout << "������� ���������� ����� � �������" << endl;
	cin >> a;
	int Arr[a] = {};

	cout << "������� �������� � �������" << endl;
	cin >> x >> y;
	const int upperlim = x;
	const int lowerlim = y;

	int b = y;

	for (int i = 0; i < a; i++)
	{
		Arr[i] = lowerlim + rand() % (upperlim - lowerlim + 1);
		cout << Arr[i] << " | ";
	}

	cout << endl << endl;

	for (int i = 0; i < a; i += 2)
	{
		if (Arr[i] > b)
		{
			b = Arr[i];
		}
	}

	cout << "������������ ������� � ������ �������� = " << b << endl;

	return 0;

}