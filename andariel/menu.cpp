#include <iostream>
#include "global.h"
#include <string>
#include "menu.h"

namespace fun3at
{
	enum class main_menu_t : int
	{
		typy = 1,
		instrukcje_sterujace
	};
	main_menu_t zmienna_menu{};

	void main_menu()
	{
		print_main_menu();
			ft::enter(1);

		std::string choice;
		std::cout << "wpisz dokad chcesz sie udac: ";
		getline(std::cin, choice);

		przypisz_operacje_main_menu(choice, zmienna_menu);
		zaladowanie_pozycji_menu(zmienna_menu);
	}

	void print_main_menu()
	{
		std::cout << "$ typy danych \n";
		std::cout << "$ instrukcje sterujace \n";
	}

	void przypisz_operacje_main_menu(std::string choice, main_menu_t& zmiemnna_menu)
	{
		if (choice == "typy danych")
			zmienna_menu = main_menu_t::typy;
		else if (choice == "instrukcje setrujace")
			zmienna_menu = main_menu_t::instrukcje_sterujace;
	}

	void zaladowanie_pozycji_menu(main_menu_t zmienna_menu)
	{
		switch (zmienna_menu)
		{
			case main_menu_t::typy:
				ft::data_type();
				break;

			case main_menu_t::instrukcje_sterujace:
				std::cout << "w budowie \n";
				break;
		}
	}
}