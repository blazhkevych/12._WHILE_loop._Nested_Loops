/*
1. Написать программу, которая выводит на экран
следующее изображение.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, ""); // работает только с потоком вывода

	int i{ 0 }, j{ 0 }, side{ 0 };

	cout << "Введите сторону квадрата: " << endl;
	cin >> side;

	while (i < side) 
	{
		j = 0;
		while (j < side) 
		{
			if (i == 0 || i == side - 1 || j == 0 || j == side - 1 || j == side / 2 || i == side / 2)
				cout << "* ";
			else
				cout << "  ";
			j++;
		}
		cout << "\n";
		i++;
	}

	return 0;
}