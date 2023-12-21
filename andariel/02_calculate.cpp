#include <iostream>
#include "global.h"

namespace fun3at
{
	void calculate(char choice_clear)
	{
	
		enum operacje_wyboru : int
		{
			dodawanie = 1,
			odejmowanie = 2,
			mnozenie,
			dzielenie,
			back
		};
		operacje_wyboru dzialanie_operacyjne{};
		
		bool continue_v{ 1 };
		do
		{
			clear_system(choice_clear);
			std::cout << "!! podaj wartosc int !! \n";
			std::cout << "1. dodawanie \n";
			std::cout << "2. odejmowanie \n";
			std::cout << "3. mnozenie \n";
			std::cout << "4. dzielenie \n";
			std::cout << "5. back \n";


			clear_iostream();
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
			case back:
				continue_v = 0;
				break;
			clear_iostream();
			}
		} while (continue_v);

		std::cin.get();
		clear_system(choice_clear);
	}
}