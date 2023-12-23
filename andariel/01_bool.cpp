#include <iostream>
#include "global.h"
#include "02_bool_check.h"

namespace fun3at
{
	void bool_t()
	{
	
		bool x{ 1 };
		bool y{ 0 };
		
		std::cout << "bool x = " << x << ", czyli true \n";
		std::cout << "bool y = " << y << ", czyli false \n";

		// bool z{ 2 };
		// blad o uzyciu wartosci typu int

		preper_file("01_bool.cpp");
		ft::clear_iostream();
	}
}