/*
	1. Напишіть програму, яка використовує чотири стандартні об'єкти класу iostream - cin, cout, cerr і clog.
*/

#include <iostream>
#include <cstdlib> // для rand() і srand()
#include <ctime>   // для time()

int main()
{
	srand(static_cast<unsigned>(time(nullptr)));

	const unsigned key = rand() % 21 + 10;
	static unsigned attempts = 7;

	std::clog << "guess my number!!!\n";//clog
	std::clog << "YOU HAVE 7 ATTEMPTS!!!\n";//clog
	
	while (true)
	{
		std::cout << "there are [" << attempts << "] attempts left\n";
		std::cout << "your number: ";

		int number;
		std::cin >> number;
		std::cout << "your number: ";

		if (std::cin.fail()) // если предыдущее извлечение оказалось неудачным,
		{
			std::cin.clear(); // то возвращаем cin в 'обычный' режим работы
			std::cin.ignore(32767, '\n'); // и удаляем значения предыдущего ввода из входного буфера
			std::cerr << "Oops, that input is invalid.  Please try again.\n";//cerr
		}
		else if (number > key)
		{
			--attempts;
			std::clog << "your number is more\n";//clog
		}
		else if (number < key)
		{
			--attempts;
			std::clog << "your number is smaller\n";//clog
		}
		else
		{
			std::cout << "you guessed my number!!!\n";//clog
			return 0;
		}
	}
		
}
