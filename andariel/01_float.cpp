#include <iostream>
#include "global.h"

namespace fun3at
{
	void float_t()
	{
		std::cout << "float_t() \n";

		float x{ 43.123456789 };
		std::cout << "float: " << x << "\n";

		preper_file("01_float.cpp");
	}
}