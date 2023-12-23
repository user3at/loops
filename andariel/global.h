#pragma once
#include <iostream>

namespace fun3at
{
	void concatenation(std::string a, int b, std::string c);
	
	void enter(short how_many);
	void press_enter();
	
	bool clean_screen();
	void clear_system(const bool& choice_clean);
	void clear_iostream();


	void preper_file(std::string name_file);
		void open_file(std::string name_file);
}
namespace ft = fun3at;
