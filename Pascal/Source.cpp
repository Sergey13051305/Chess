#include<iostream>
#include <iomanip>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int a, b = 1;
	cout << "Введите количество строк для пирамиды Паскаля: ";
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		int j = 1;
		cout.width(5);
		for (int c = 0; c <= i; c++)
		{
			cout << j << " ";
			j = j * (i - c) / (c + 1);
		}
		cout << "\n";
	}
		cout << "\n";

}