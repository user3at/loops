#include <iostream>

namespace fun3at
{
	void calculate()
	{

		enum operacje_wyboru : int
		{
			dodawanie = 1,
			odejmowanie = 2,
			mnozenie,
			dzielenie
		};
		operacje_wyboru dzialanie_operacyjne{};

		std::cout << "1. dodawanie \n";
		std::cout << "2. odejmowanie \n";
		std::cout << "3. mnozenie \n";
		std::cout << "4. dzielenie \n";

		int choice;
		std::cin >> choice;

		switch (choice)
		{
		case dodawanie:
			std::cout << "dodawanie \n";
			break;
		case odejmowanie:
			std::cout << "odejmowanie \n";
			break;
		case mnozenie:
			std::cout << "mnozenie \n";
			break;
		case dzielenie:
			std::cout << "dzielenie \n";
			break;
		}
	}
}