#pragma once
#include <iostream>

namespace fun3at
{
	enum class menu_of_types_list : int;
	
	void print_menu_type();
	
	int menu_type(const bool& choice_clear);
	
	void set_operation_menu_type(std::string choice, menu_of_types_list& zmienna_menu_type);
	
	void reloading_position_menu(menu_of_types_list zmienna_menu_type, int choice_clear);
}
