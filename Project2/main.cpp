/*
	2. �������� ��������, ��� ������� ������������ ������ ����� ��'� � ��������� ���������� ����� ���� �� �����.
*/

#include <iostream>
#include <string> // ��� ������������ std::string

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

	//����� ���� �� ���� ������� ������� ��� � ��� ������������� 
	std::string full_name = first_name + " " + last_name;//������ � �� �� ����� 
	std::cout << "full name: \n";
	std::cout.width(20);
	std::cout.fill('-');
	std::cout << full_name << "|\n";

	return 0;
}
