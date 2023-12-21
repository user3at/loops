#include <iostream>
#include "global.h"

namespace fun3at
{
	void long_double_t()
	{
		std::cout << "sprawdz kod \n";

		long double z{ 3.123456789101112131415 };
		std::cout << "logn double: " << z << "\n";

		preper_file("03_long_double.cpp");
	}
}