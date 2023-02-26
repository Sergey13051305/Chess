#include<iostream>
using namespace std;
//#define TASK_0
//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
//#define TASK_5//разобрали на паре
//#define TASK_6//разобрали на паре
void main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "Введите число для отображения фигуры: "; cin >> n;
#ifdef TASK_0
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif

#ifdef TASK_1
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "* ";
		}
		cout << "\n";
	}
#endif

#ifdef TASK_2
	for (int i=1; i<=n;n--)
	{
		for (int j=1; j<=n;j++)
		{
			cout << "* ";
		}
		
		cout << "\n";
	}
#endif

#ifdef TASK_3

		for (int i=n; i>=1; i--) 
		{	
			for (int j = 0; j <= i; j++)
			{
				cout << " ";
			}
			for (int j = 0; j <=n-i; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
#endif

#ifdef TASK_4
		for (int i = n; i >= 1; i--)
		{
			for (int j = 1; j <= n - i; j++)
			{
				cout << " ";
			}
			for (int j = 1; j <= i; j++)
			{ 
				cout << "*";
			}
			cout << endl;
		}
#endif

#ifdef TASK_5
		for (int i = 0; i < n; i++)
		{
			for (int j = i; j < n; j++)cout << " "; cout << "/";
			for (int j = 0; j < i; j++) cout << "  "; cout << "\\";
			cout << endl;
		}


		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
			for (int j = i; j < n - 1; j++)cout << "  "; cout << "/";
			cout << endl;
		}
#endif


#ifdef TASK_6
		for (int i = 0; i < n; i++)
		{
			for (int j = 0;  j< n; j++)
			{
				if ((i + j) % 2 == 0) cout << "+ ";
				else cout << "- ";
			}
			cout << endl;
		}


#endif





}