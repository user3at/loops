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
		type_bool
	};
	menu_of_types_list element_menu_type_list{};
	
	int menu_type()
	{
		int choice_back{ 1 };
		do
		{
			print_menu_type();
				enter(1);
			
			std::string choice;
			getline(std::cin, choice);
			
			if (choice != "9")
			{
				set_operation_menu_type(choice, element_menu_type_list);
				reloading_position_menu(element_menu_type_list);
				//ft::clear_iostream();

			}
			else
				choice_back = 9;

		} while (choice_back != 9);

		return choice_back;
	}

	void print_menu_type()
	{
		std::cout << "typy fundamentalne, wpisz: \n";

			std::cout << "$typ int \n";
			std::cout << "  $typ wyliczeniowy enum \n";
			std::cout << "$typ float \n";
			std::cout << "$typ double \n";
			std::cout << "$typ long double \n";
			std::cout << "$typ char \n";
			std::cout << "$typ bool \n";
			std::cout << "9. back \n";

			//open_file("x01_float.h");
			
		//std::cout << "typy zlozone, wpisz: \n";

	}

	void set_operation_menu_type(std::string choice, menu_of_types_list& element_menu_type_list)
	{
		if (choice == "typ int")
			element_menu_type_list = menu_of_types_list::type_int;
		else if (choice == "typ wyliczeniowy enum")
			element_menu_type_list = menu_of_types_list::type_enum;
		else if (choice == "typ float")
			element_menu_type_list = menu_of_types_list::type_float;
		else if (choice == "typ double")
			element_menu_type_list = menu_of_types_list::type_double;
		else if (choice == "typ long double")
			element_menu_type_list = menu_of_types_list::type_long_double;
		else if (choice == "typ char")
			element_menu_type_list = menu_of_types_list::type_char;
		else if (choice == "typ bool")
			element_menu_type_list = menu_of_types_list::type_bool;
	}

	void reloading_position_menu(menu_of_types_list element_menu_type_list)
	{
		switch (element_menu_type_list)
		{
			case menu_of_types_list::type_int:
			{
				system("clear");
				int_t();
			}
				break;

			case menu_of_types_list::type_enum:
			{
				system("clear");
				enum_t();
			}
				break;
			
			case menu_of_types_list::type_float:
			{
				system("clear");
				float_t();
			}
				break;

			case menu_of_types_list::type_double:
			{
				system("clear");
				double_t();
			}
				break;

			case menu_of_types_list::type_long_double:
			{
				system("clear");
				long_double_t();
			}
				break;

			case menu_of_types_list::type_char:
			{
				system("clear");
				char_t();
			}
				break;

			case menu_of_types_list::type_bool:
			{
				system("clear");
				bool_t();
			}
				break;
		}
		//system("pause");
	}
}