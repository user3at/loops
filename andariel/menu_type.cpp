#include <iostream>
#include "menu_type.h"
#include "global.h"
#include <string>

//#include "menu_type.h"

namespace fun3at
{
	enum class menu_type_t : int
	{
		typ_int = 1,
		typ_enum,
		typ_float,
		typ_double,
		typ_long_double,
		typ_char,
		typ_bool
	};
	menu_type_t zmienna_menu_type{};
	
	void menu_type()
	{
		print_menu_type();
			enter(1);

		std::string choice;
		getline(std::cin, choice);

		przypisz_operacje_menu_type(choice, zmienna_menu_type);
		zaladowanie_pozycji_menu(zmienna_menu_type);
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

			//open_file("x01_float.h");
			
		//std::cout << "typy zlozone, wpisz: \n";

	}

	void przypisz_operacje_menu_type(std::string choice, menu_type_t& zmienna_menu_type)
	{
		if (choice == "typ int")
			zmienna_menu_type = menu_type_t::typ_int;
		else if (choice == "typ wyliczeniowy enum")
			zmienna_menu_type = menu_type_t::typ_enum;
		else if (choice == "typ float")
			zmienna_menu_type = menu_type_t::typ_float;
		else if (choice == "typ double")
			zmienna_menu_type = menu_type_t::typ_double;
		else if (choice == "typ long double")
			zmienna_menu_type = menu_type_t::typ_long_double;
		else if (choice == "typ char")
			zmienna_menu_type = menu_type_t::typ_char;
		else if (choice == "typ bool")
			zmienna_menu_type = menu_type_t::typ_bool;
	}

	void zaladowanie_pozycji_menu(menu_type_t zmienna_menu_type)
	{
		switch (zmienna_menu_type)
		{
			case menu_type_t::typ_int:
				int_t();
				break;

			case menu_type_t::typ_enum:
				enum_t();
				break;
			
			case menu_type_t::typ_float:
				float_t();
				break;

			case menu_type_t::typ_double:
				double_t();
				break;

			case menu_type_t::typ_long_double:
				long_double_t();
				break;

			case menu_type_t::typ_char:
				char_t();
				break;

			case menu_type_t::typ_bool:
				bool_t();
				break;
		}
	}
}