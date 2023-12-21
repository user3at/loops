#include <iostream>
#include "global.h"

namespace fun3at
{
	void george_bool()
	{
		std::cout << "george_bool() \n";
		// ten typ pochodzi od matematyka George'a Boola
		bool can_bay;
		can_bay = false;

		short age;
		std::cout << "ile masz lat: ";
		std::cin >> age;

		if (age >= 18)
			can_bay = true;

		else if (age < 18)
			can_bay = false;

		if (can_bay)
			std::cout << "mozesz kupic \n";

		else if (!can_bay)
			std::cout << "nie mozesz kupic \n";

		preper_file("03_george_bool.cpp");
	}

}