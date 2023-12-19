#pragma once
#include <iostream>
#include "menu.h"

namespace fun3at
{
	enum class main_menu_t : int;
	void main_menu();
		void print_main_menu();
		
		void przypisz_operacje_main_menu(std::string choice, main_menu_t& zmienna_menu);
		void zaladowanie_pozycji_menu(main_menu_t zmienna_menu);
}
