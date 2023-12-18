#include <iostream>
#include "02_bool_check.h"

namespace fun3at
{
	void bool_check()
	{
		bool x{ 0 };
		char y;
		std::cout << "prawda czy falsz y/n \n";
		std::cin >> y;

		if (y == 'y')
		{
			x = 1;
			bool_check_value(x);
		}
		else if (y == 'n')
		{
			x = 0;
			bool_check_value(x);
		}
		else
		{
			std::cout << "nie znam \n";
		}
	}

	void bool_check_value(bool x)
	{
		if (x)
		{
			std::cout << "x ma wartosc: " << x << ", czyli prawda \n";
		}
		else if (!x)
		{
			std::cout << "x ma wartosc: " << x << ", czyli falsz \n";
		}
	}
}