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
	int i{ 1 }, j{ 1 };

	while (i <= 21)
	{
		cout << '*';
		i++;
		if (i == 22)
		{
			cout << "\n";
			j++;
			i = 1;
			while (i <= 21 )
			{
				if (i == 1 || i == 11 || i == 21)
				{
					cout << "*";
				}
				else
				{
					cout << ' ';
				}
				i++;
			}
		}


	}

}