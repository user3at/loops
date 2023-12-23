#include <iostream>
#include "global.h"

namespace fun3at
{
	void calculate(const bool& choice_clean)
	{
	
		enum operacje_wyboru : int
		{
			dodawanie = 1,
			odejmowanie = 2,
			mnozenie,
			dzielenie
		};
		operacje_wyboru dzialanie_operacyjne{};
		
		bool control_back{ false };
		do
		{
			clear_system(choice_clean);
			std::cout << "!! podaj wartosc int !! \n";
			std::cout << "1. dodawanie \n";
			std::cout << "2. odejmowanie \n";
			std::cout << "3. mnozenie \n";
			std::cout << "4. dzielenie \n";
			std::cout << "5. back \n";


			clear_iostream();
				int choice;
				std::cin >> choice;

				if (choice != 5)
				{

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
				else if (choice == 5)
					control_back = true;
				else
					std::cout << "podaj poprawna wartosc \n";
		} while (!control_back);
	}
}