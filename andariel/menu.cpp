#include <iostream>
#include <string>
#include "menu.h"
#include "global.h"
#include "data_type.h"

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

	void menu_main()
	{
		bool control_back{ true };
		do
		{
			print_main_menu();
			ft::enter(1);

			std::cout << "where we go now: ";
			std::string choice;
			getline(std::cin, choice);

			if (choice == "type data" || choice == "control structures" || choice == "0")
			{
				operation_attribute_main_menu(choice, list_element);
				set_menu_position(list_element);
			}
			else
			{
				std::cout << "podaj poprawna wartosc \n";
				menu_main();
			}
		} while (!control_back);
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

	void set_menu_position(main_menu_t list_element)
	{
		switch (list_element)
		{
		case main_menu_t::type:
			ft::data_type();
			break;

		case main_menu_t::control_structures:
			std::cout << "w budowie \n";
			break;

		case main_menu_t::exit:
			exit(0);
			break;

		}
	}

}
namespace ft = fun3at;