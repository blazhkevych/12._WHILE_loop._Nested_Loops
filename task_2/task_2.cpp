/*
2. Написать программу, которая выводит на экран
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

	while (i < side) //  переход на новую строку (строка)
	{
		j = 0;
		while (j < side) // рисует строку (столбец)
		{
			if (i == 0 || i == side - 1 || j == 0 || j == side - 1 || // пустой квадрат
				i == side / 4 && j >= side / 4 * 3 || j == side / 4 * 3 && i < side / 4 || // правый верхний
				i == side / 4 && j <= side / 4 || j == side / 4 && i <= side / 4 || // левый верхний
				i == side / 4 * 3 && j >= side / 4 * 3 || i >= side / 4 * 3 && j == side / 4 * 3 || // правый нижний
				i >= side / 4 * 3 && j == side / 4 || i == side / 4 * 3 && j <= side / 4 // левый нижний
				)
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