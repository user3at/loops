#pragma once
#include <iostream>
#include "menu.h"

namespace fun3at
{
	enum class main_menu_t : int;
	void print_main_menu();
		int main_menu(int& control_back);
		
		void przypisz_operacje_main_menu(std::string choice, main_menu_t& zmienna_menu);
		int zaladowanie_pozycji_menu(main_menu_t zmienna_menu, int& control_back);
}
