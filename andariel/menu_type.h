#pragma once
#include <iostream>

namespace fun3at
{
	enum class menu_type_t : int;
	void menu_type();
	void print_menu_type();
	void przypisz_operacje_menu_type(std::string choice, menu_type_t& zmienna_menu_type);
	void zaladowanie_pozycji_menu(menu_type_t zmienna_menu_type);
}
