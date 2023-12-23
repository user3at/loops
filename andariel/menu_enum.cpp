#include <iostream>
#include <string>
#include "global.h"
#include "01_enum.h"
#include "02_calculate.h"
#include "03_enum_days.h"
#include "04_enum_true_calculate.h"
//#include "menu_enum.h"

namespace fun3at
{
	enum class menu_of_enum_list: int
	{
		theory = 0,
		calculate,
		days,
		true_calculate
	};
	menu_of_enum_list element_menu_enum{};

	void print_menu_enum()
	{
		std::cout << "what you wish \n";

		std::cout << "theory \n";
		std::cout << "calculate \n";
		std::cout << "days \n";
		std::cout << "true calculate \n";
		std::cout << "back \n";
	}

	void set_operation(std::string choice, menu_of_enum_list& element_menu_enum)
	{
		if (choice == "theory")
			element_menu_enum = menu_of_enum_list::theory;
		else if (choice == "calculate")
			element_menu_enum = menu_of_enum_list::calculate;
		else if (choice == "days")
			element_menu_enum = menu_of_enum_list::days;
		else if (choice == "true calculate")
			element_menu_enum = menu_of_enum_list::true_calculate;
	}

	void reloading_position_menu(menu_of_enum_list element_menu_enum, const bool& choice_clean)
	{
		switch (element_menu_enum)
		{
		case menu_of_enum_list::theory:
		{
				enum_t(choice_clean);
			//ft::clear_iostream();
		}
			break;

		case menu_of_enum_list::calculate:
		{
				calculate(choice_clean);
		//	ft::clear_iostream();
		}
			break;

		case menu_of_enum_list::days:
		{
			preper_file("03_enum_days.cpp");
				enum_days(choice_clean);
			//ft::clear_iostream();
		}
			break;

		case menu_of_enum_list::true_calculate:
		{
			preper_file("04_enum_true_calculate.cpp");
				true_calculate(choice_clean);
			//ft::clear_iostream();
		}

		}
	}

	void menu_enum(const bool& choice_clean)
	{
		bool control_back{ false };
		do{
			// bool choice_clean = clean_screen();
			clear_system(choice_clean);
			print_menu_enum();
				enter(1);

			std::string take_position;
				getline(std::cin, take_position);

				if (take_position != "back")
				{
					set_operation(take_position, element_menu_enum);
					reloading_position_menu(element_menu_enum, choice_clean);
				}
				else
					control_back = true;
		} while (!control_back);
	
		std::cout << control_back << "!!!!";
	}
}