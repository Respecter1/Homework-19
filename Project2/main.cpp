/*
	2. Напишіть програму, яка пропонує користувачеві ввести повне ім'я з наступним виведенням цього імені на екран.
*/

#include <iostream>
#include <string> // Для використання std::string

int main()
{
	std::string first_name;
	std::string last_name;

	std::cout << "Enter first name: ";
	std::cin >> first_name;

	std::cout.width(20);
	std::cout.fill('-');
	std::cout << first_name << "|\n";

	std::cout << "Enter last name: ";
	std::cin >> last_name;

	std::cout.width(20);
	std::cout.fill('-');
	std::cout << last_name << "|\n";

	//можно було би щось простіще зробити але я тут практикувався 
	std::string full_name = first_name + " " + last_name;//такого я ще не робив 
	std::cout << "full name: \n";
	std::cout.width(20);
	std::cout.fill('-');
	std::cout << full_name << "|\n";

	return 0;
}
