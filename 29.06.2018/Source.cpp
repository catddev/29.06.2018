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
		int n;
		int k;
		cin >> n >> k;
		int d = n;

		if (n / k != 0) d = n - n%k;

		for (int i = 0; i < (n / k); i++)
		{
			
			for (int j = i + 1 ; j <= d; j=j+n/k)
			{
				cout << j <<" ";
			}
			cout << endl;
		}
			for (int s = 1; s <= n%k; s++)
			{
				cout << d + s << " ";
			}
			cout << endl;
	}
	break;
	case 2:
	{
		int n;
		cin >> n;
		bool flag = false;
		for (int i = 2; i < n; i++)
		{
			if (n%i == 0)
			{
				flag = true;
				break;
			}
		}
		if (flag)
			cout << "number is not prime" << endl;
		else cout << "Number is prime" << endl;

	}
	break;
	case 3:
	{
		int n;
		bool flag = false;

		while(true)
		{
			flag = false;
			cin >> n;

			for (int i = 2; i < n; i++)
			{
				if (n%i == 0)
				{
					flag = true;
					break;
				}
			}

			if (flag)
				cout << "number is not prime" << endl;
			else
			{
				cout << "Number is prime" << endl;

			}
		}
	}
	break;
	case 4: //85
	{
		double a;
		double h;
		int n;
		cin >> a >> h >> n;
		int sum = 0;

		for (int i = 0; i <= n; i++)
		{
			if(i==0||i==n)
			sum = sum + (pow((a + h*i), 2) + 1)*pow(cos(a + h*i), 2);
			else sum = sum + 2*(pow((a + h*i), 2) + 1)*pow(cos(a + h*i), 2);
		}
		cout << sum << endl;
	}
	break;
	case 5:
	{
		int n;
		cin >> n;
		int x = 0;

		while (n/2>0)
		{
			cout << n % 2;
			n = n / 2;
			if (n / 2==0) cout << 1;
		}
		cout << endl;
	}
	break;
	case 6: //110
	{
		int n = 0;
		double sum = 0;

		for (int i = 103; i > 0; i -= 2)
		{
			sum = 1/(i + sum);
		}
		cout << sum << endl << endl;
	}
	break;
	case 7: //117 a
	{
		cout << "117 a" << endl;
		cout << "enter n: ";
		int n;
		cin >> n;
		double p = 1;
		int i = 1;

		while (n > i/2)
		{
			p = p*(i / (i + 1.0));
			i += 2;
		}
		cout << p << endl << endl;
	}
	break;
	case 8:
	{
		//117 б
		cout << "117 б" << endl;

		int n;
		cout << "enter n: ";
		cin >> n;
		double p = 1;
		double i = 1;
		double j = 1;

		while (n >= j)
		{
			p = p*(i / j);
			i += 2;
			j++;
		}
		cout << p << endl << endl;
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