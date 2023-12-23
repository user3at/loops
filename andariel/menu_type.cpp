#include <iostream>
//#include "menu_type.h"
#include "global.h"
#include <string>

#include "01_int.h"
#include "menu_enum.h"
#include "01_float.h"
#include "02_double.h"
#include "03_long_double.h"
#include "01_char.h"
#include "01_bool.h"

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
	}

	void reloading_position_menu(menu_of_types_list element_menu_type_list, const bool& choice_clean)
	{
		switch (element_menu_type_list)
		{
			case menu_of_types_list::type_int:
			{
				clear_system(choice_clean);
				int_t();
			}
				break;

			case menu_of_types_list::type_enum:
			{
				clear_system(choice_clean);
					menu_enum(choice_clean);
				
			}
				break;
			
			case menu_of_types_list::type_float:
			{
				clear_system(choice_clean);
					float_t();

			}
				break;

			case menu_of_types_list::type_double:
			{
				clear_system(choice_clean);
					double_t();
			}
				break;

			case menu_of_types_list::type_long_double:
			{
				clear_system(choice_clean);
					long_double_t();
			}
				break;

			case menu_of_types_list::type_char:
			{
				clear_system(choice_clean);
					char_t();
			}
				break;

			case menu_of_types_list::type_bool:
			{
				clear_system(choice_clean);
					bool_t();
			}
				break;
		}
	}

	void menu_type(const bool& choice_clean)
	{
		bool control_back{ false };
		do
		{

			clear_system(choice_clean);
			print_menu_type();
			enter(1);

			std::string take_position;
			getline(std::cin, take_position);

			if (take_position != "back")
			{
				set_operation_menu_type(take_position, element_menu_type_list);
				reloading_position_menu(element_menu_type_list, choice_clean);
			}
			else
			{
				control_back = true;
			}

		} while (!control_back);

		//return control_back;
	}
}