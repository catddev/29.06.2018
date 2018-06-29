#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>
#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	int tn = 0;

start:

	cout << "Задача № ";
	cin >> tn;

	switch (tn)
	{
	case 1:
	{
		int n = 9;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i >= j && (i + j >= n - 1)) cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
		int m = 9;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (i <= j && (i + j <= m - 1)) cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
	}
	break;
	case 2:
	{
		int height = 0;

		cout << "Введите высоту  равнобедренного треугольника: ";
		cin >> height;

		for (int i = 0; i < height; i++)
		{
			for (int j = 1; j < height - i; j++)
			{
				cout << ' ';
			}

			for (int j = height - 2 * i; j <= height; j++)
			{
				cout << '*';
			}
			cout << endl;
		}
	}
	break;
	case 3:
	{
		int height = 0;

		cout << "Введите высоту  равнобедренного треугольника: ";
		cin >> height;

		for (int i = 0; i < height; i++)
		{
			for (int j = 1; j < height - i; j++)
			{
				cout << ' ';
			}

			for (int j = height - 2 * i; j <= height; j++)
			{
				cout << '*';
			}
			cout << endl;
		}
	}
	break;
	case 4:
	{

	}
	break;
	case 5:
	{

	}
	break;
	case 6:
	{

	}
	break;
	case 7:
	{

	}
	break;
	case 8:
	{

	}
	break;
	case 9:
	{

	}
	break;
	case 10:
	{

	}
	break;
	default:
		cout << "нет такой задачи" << endl << endl;
	}
	goto start;

	system("pause");
	return 0;
}