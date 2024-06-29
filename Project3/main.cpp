/*
	﻿3. Перепишіть лістинг 16.9, відмовившись від використання методів putback() та ignore().
*/


#include <iostream>

using namespace std;

int main()
{
	size_t j = 0;

	while (true)
	{
		const size_t size = 30;
		char ch2[size];

		std::cout << "Enter a phrase: ";
		std::cin.getline(ch2, size);

		for (size_t i = 0; i < size; i++)
		{
			if (ch2[i] == '!')//це 1 перевірка якщо тут є '!' то він перетвориться в $
			{
				ch2[i] = '$';
			}
			if (ch2[i] != '#')//якщо тут немає # то він запишеться в наш масив 
			{
				ch2[j] = ch2[i];
				j++;//тут ми робимо крок далі 
			}


		}
		std::cout.width(size);
		std::cout.fill('-');
		std::cout << ch2 << "|\n";

	}

}

/*
	enter a phrase : Now!is#the!time#for!fun#!
	Now$isthe$timefor$fun$
*/
