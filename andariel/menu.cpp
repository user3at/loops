#include <iostream>
#include "global.h"
#include <string>
#include "menu.h"

namespace fun3at
{
	enum class main_menu_t : int
	{
		exit = 0,
		typy = 1,
		instrukcje_sterujace
	};
	main_menu_t zmienna_menu{};

	void print_main_menu()
	{
		std::cout << "$ typy danych \n";
		std::cout << "$ instrukcje sterujace \n";
		std::cout << "0. exit \n";
	}

	int main_menu(int& control_back)
	{
		print_main_menu();
			ft::enter(1);

		std::cout << "wpisz dokad chcesz sie udac: ";
			std::string choice;
			getline(std::cin, choice);

		if (choice == "typy danych" || choice == "instrukcje sterujace" || choice == "0")
		{
			przypisz_operacje_main_menu(choice, zmienna_menu);
			zaladowanie_pozycji_menu(zmienna_menu, control_back);
		}
		else
		{
			std::cout << "podaj poprawna wartosc \n";
			main_menu(control_back);
		}

		return control_back;
	}

	void przypisz_operacje_main_menu(std::string choice, main_menu_t& zmiemnna_menu)
	{
		if (choice == "typy danych")
			zmienna_menu = main_menu_t::typy;
		else if (choice == "instrukcje setrujace")
			zmienna_menu = main_menu_t::instrukcje_sterujace;

		else if (choice == "0")
			zmienna_menu = main_menu_t::exit;

	}

	int zaladowanie_pozycji_menu(main_menu_t zmienna_menu, int& control_back)
	{
		switch (zmienna_menu)
		{
			case main_menu_t::typy:
				ft::data_type(control_back);
				break;

			case main_menu_t::instrukcje_sterujace:
				std::cout << "w budowie \n";
				break;

			case main_menu_t::exit:
				control_back = 0;
				break;
		}
		return control_back;
	}
}