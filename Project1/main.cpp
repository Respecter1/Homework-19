/*
	1. �������� ��������, ��� ����������� ������ ��������� ��'���� ����� iostream - cin, cout, cerr � clog.
*/

#include <iostream>
#include <cstdlib> // ��� rand() � srand()
#include <ctime>   // ��� time()

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

		if (std::cin.fail()) // ���� ���������� ���������� ��������� ���������,
		{
			std::cin.clear(); // �� ���������� cin � '�������' ����� ������
			std::cin.ignore(32767, '\n'); // � ������� �������� ����������� ����� �� �������� ������
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
