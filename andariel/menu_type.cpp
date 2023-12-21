#include <iostream>
#include "menu_type.h"
#include "global.h"
#include <string>

//#include "menu_type.h"

namespace fun3at
{
	enum class menu_of_types_list : int
	{
		type_int = 1,
		type_enum,
		type_float,
		type_double,
		type_long_double,
		type_char,
		type_bool,
		back
	};
	menu_of_types_list element_menu_type_list{};
	
	void print_menu_type()
	{
		std::cout << "typy fundamentalne, wpisz: \n";

			std::cout << "$ type int \n";
			std::cout << "$   type enumerated \n";
			std::cout << "$ type float \n";
			std::cout << "$ type double \n";
			std::cout << "$ type long double \n";
			std::cout << "$ type char \n";
			std::cout << "$ type bool \n";
			std::cout << "$ back \n";

	}

	int menu_type(const bool& choice_clear)
	{
		int go_back{ 1 };
		do
		{
			clear_system(choice_clear);
			print_menu_type();
				enter(1);
			
			std::string take_position;
				getline(std::cin, take_position);
			
			if (take_position != "back")
			{
				set_operation_menu_type(take_position, element_menu_type_list);
				reloading_position_menu(element_menu_type_list, choice_clear);
			}
			else
				go_back = 9;

		} while (go_back != 9);

		return go_back;
	}


	void set_operation_menu_type(std::string choice, menu_of_types_list& element_menu_type_list)
	{
		if (choice == "type int")
			element_menu_type_list = menu_of_types_list::type_int;
		else if (choice == "type enumerated")
			element_menu_type_list = menu_of_types_list::type_enum;
		else if (choice == "type float")
			element_menu_type_list = menu_of_types_list::type_float;
		else if (choice == "type double")
			element_menu_type_list = menu_of_types_list::type_double;
		else if (choice == "type long double")
			element_menu_type_list = menu_of_types_list::type_long_double;
		else if (choice == "type char")
			element_menu_type_list = menu_of_types_list::type_char;
		else if (choice == "type bool")
			element_menu_type_list = menu_of_types_list::type_bool;
		else if (choice == "back")
			element_menu_type_list = menu_of_types_list::back;
	}

	void reloading_position_menu(menu_of_types_list element_menu_type_list, int choice_clear)
	{
		switch (element_menu_type_list)
		{
			case menu_of_types_list::type_int:
			{
				clear_system(choice_clear);
					int_t();
				ft::clear_iostream();
			}
				break;

			case menu_of_types_list::type_enum:
			{
				clear_system(choice_clear);
					enum_t();
				ft::clear_iostream();
			}
				break;
			
			case menu_of_types_list::type_float:
			{
				clear_system(choice_clear);
					float_t();
				ft::clear_iostream();
			}
				break;

			case menu_of_types_list::type_double:
			{
				clear_system(choice_clear);
					double_t();
				ft::clear_iostream();
			}
				break;

			case menu_of_types_list::type_long_double:
			{
				clear_system(choice_clear);
					long_double_t();
				ft::clear_iostream();
			}
				break;

			case menu_of_types_list::type_char:
			{
				clear_system(choice_clear);
					char_t();
				ft::clear_iostream();
			}
				break;

			case menu_of_types_list::type_bool:
			{
				clear_system(choice_clear);
					bool_t();
				ft::clear_iostream();
			}
				break;
		}
	}
}