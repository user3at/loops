#pragma once
#include "02_calculate.h"
#include "03_enum_days.h"
#include "04_enum_true_calculate.h"

namespace fun3at
{
	enum class menu_of_enum_list : int;
	
	void print_menu_enum();

	void set_operation(std::string choice, menu_of_enum_list& element_menu_enum);

	void reloading_position_menu(menu_of_enum_list element_menu_enum, const bool& choice_clean);

	void menu_enum(const bool& choice_clean);
}
