#include <iostream>
#include "global.h"
#include <string>
#include "menu.h"

namespace fun3at
{
	enum class main_menu_t : int
	{
		exit = 0,
		type = 1,
		control_structures
	};
	main_menu_t list_element{};

	void print_main_menu()
	{
		std::cout << "$ type data \n";
		std::cout << "$ control structures \n";
		std::cout << "0. exit \n";
	}

	int main_menu(int& control_back)
	{
		print_main_menu();
			ft::enter(1);

		std::cout << "where we go now: ";
			std::string choice;
			getline(std::cin, choice);

		if (choice == "type data" || choice == "control structures" || choice == "0")
		{
			operation_attribute_main_menu(choice, list_element);
			set_menu_position(list_element, control_back);
		}
		else
		{
			std::cout << "podaj poprawna wartosc \n";
			main_menu(control_back);
		}

		return control_back;
	}

	void operation_attribute_main_menu(std::string choice, main_menu_t& zmiemnna_menu)
	{
		if (choice == "type data")
			list_element = main_menu_t::type;
		else if (choice == "control structures")
			list_element = main_menu_t::control_structures;

		else if (choice == "0")
			list_element = main_menu_t::exit;

	}

	int set_menu_position(main_menu_t list_element, int& control_back)
	{
		switch (list_element)
		{
			case main_menu_t::type:
				ft::data_type(control_back);
				break;

			case main_menu_t::control_structures:
				std::cout << "w budowie \n";
				break;

			case main_menu_t::exit:
				control_back = 0;
				break;
		}
		return control_back;
	}
}