#pragma once
#include <iostream>
#include "menu.h"

namespace fun3at
{
	enum class main_menu_t : int;
	void print_main_menu();
		int main_menu(int& control_back);
		
		void operation_attribute_main_menu(std::string choice, main_menu_t& list_element);
		int set_menu_position(main_menu_t list_element, int& control_back);
}
