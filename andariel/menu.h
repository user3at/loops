#pragma once
#include <iostream>
#include "menu.h"

namespace fun3at
{
	enum class main_menu_t : int;
	void print_main_menu();
		void menu_main();
		
		void operation_attribute_main_menu(std::string choice, main_menu_t& list_element);
		void set_menu_position(main_menu_t list_element);
}
namespace ft = fun3at;