#include <iostream>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Rus");

	int num;
	cout << "введите номер задания: ";
	cin >> num;

	if (num == 1)
	{
		//треугольники из звездочек

		int n;
		cout << "n = ";
		cin >> n;

		int var;
		cout << "choose the form: ";
		cin >> var;

		switch (var)
		{
		case 1:
		{
			for (int i = 0; i<n; i++)
			{
				for (int j = 0; j<n; j++)
				{
					if (j >= i)
						cout << "*";
					else
						cout << " ";
				}
				cout << endl;
			}
		}
		break;

		case 2:
		{
			for (int i = 0; i<n; i++)
			{
				for (int j = 0; j<n;j++)
				{
					if (j <= i)
						cout << "*";
					else
						cout << " ";
				}
				cout << endl;
			}
		}
		break;

		case 3:
		{
			for (int i = 0; i<n; i++)
			{
				for (int j = 0; j<n; j++)
				{
					if (j >= i && (i + j) <= (n - 1))
						cout << "*";
					else
						cout << " ";
				}
				cout << endl;
			}
		}
		break;

		case 4:
		{
			for (int i = 0; i<n; i++)
			{
				for (int j = 0; j<n; j++)
				{
					if (j <= i && (j + i) >= (n - 1))
						cout << "*";
					else
						cout << " ";
				}
				cout << endl;
			}
		}
		break;

		case 5:
		{
			for (int i = 0; i<n; i++)
			{
				for (int j = 0; j<n; j++)
				{
					if ((j >= i && (i + j) <= (n - 1)) || (j <= i && (i + j) >= (n - 1)))
						cout << "*";
					else
						cout << " ";
				}
				cout << endl;
			}
		}
		break;

		case 6:
		{
			for (int i = 0; i<n; i++)
			{
				for (int j = 0; j<n; j++)
				{
					if ((j>i && (i + j)<(n - 1)) || (j<i && (i + j) >(n - 1)))
						cout << " ";
					else
						cout << "*";
				}
				cout << endl;
			}
		}
		break;

		case 7:
		{
			for (int i = 0; i<n; i++)
			{
				for (int j = 0; j<n; j++)
				{
					if (j>i || (j + i)>(n - 1))
						cout << " ";
					else
						cout << "*";
				}
				cout << endl;
			}
		}
		break;

		case 8:
		{
			for (int i = 0; i<n; i++)
			{
				for (int j = 0; j<n; j++)
				{
					if (j<i || (i + j)<(n - 1))
						cout << " ";
					else
						cout << "*";
				}
				cout << endl;
			}
		}
		break;

		case 9:
		{
			for (int i = 0; i<n; i++)
			{
				for (int j = 0; j<n; j++)
				{
					if ((i + j) <= (n - 1))
						cout << "*";
					else
						cout << " ";
				}
				cout << endl;
			}
		}
		break;

		case 10:
		{
			for (int i = 0; i<n; i++)
			{
				for (int j = 0; j<n; j++)
				{
					if ((i + j) >= (n - 1))
						cout << "*";
					else
						cout << " ";
				}
				cout << endl;
			}
		}
		break;
		}
	}

	else if (num == 2)
	{
		//1.	вывести ром из звездочек.

		int n;
		cout << "n = ";
		cin >> n;

		if (n % 2 != 0)
		{
			for (int i = 0; i<n; i++)
			{
				if (i <= n / 2)
				{
					for (int j = 0; j<n / 2 - i; j++)
						cout << " ";
					for (int j = n / 2 - i; j <= n / 2 + i; j++)
						cout << "*";
					for (int j = n / 2 + i + 1; j<n; j++)
						cout << " ";
					cout << endl;
				}
				else
				{
					for (int j = 0; j<i - n / 2; j++)
						cout << " ";
					for (int j = i - n / 2; j<n / 2 + (n - i); j++)
						cout << "*";
					for (int j = n / 2 + (n - i); j<n; j++)
						cout << " ";
					cout << endl;
				}
			}
		}
		else
		{
			for (int i = 0; i<n + 1; i++)
			{
				if (i<n / 2)
				{
					for (int j = 0; j<n / 2 - i; j++)
						cout << " ";
					for (int j = n / 2 - i; j <= n / 2 + i; j++)
						cout << "*";
					for (int j = n / 2 + i + 1; j<n + 1; j++)
						cout << " ";
					cout << endl;
				}
				else if (i == n / 2)
				{
					for (int j = 0; j<n + 1; j++)
						cout << "*";
					cout << endl;
				}
				else
				{
					for (int j = 0; j<i - n / 2; j++)
						cout << " ";
					for (int j = i - n / 2; j <= n / 2 + (n - i); j++)
						cout << "*";
					for (int j = n / 2 + (n - i) + 1; j<n + 1; j++)
						cout << " ";
					cout << endl;
				}
			}
		}
	}

	else if (num == 3)
	{
		//2.	вывести на экран количество чисел, кратных заданному.
		int n;
		cout << "n = ";
		cin >> n;

		for (int i = 0; i<n; i++)
			cout << i*n << " ";
	}

	else if (num == 4)
	{
		//3.	для двух чисел вывести наименьшее общее кратное.

		int a, b;
		cout << "a = ";
		cin >> a;

		cout << "b = ";
		cin >> b;

		int m;
		if (a<b)
			m = a;
		else
			m = b;

		for (int i = 2; i<m; i++)
		{
			if (a%i == 0 && b%i == 0)
			{
				cout << i << endl;
				break;
			}
		}
	}







	return 0;
}