#include <iostream>
namespace fun3at
{
	void bool_t()
	{
	
		bool x{ 1 };
		bool y{ 0 };
		
		std::cout << "x = " << x << "\n";
		std::cout << "y = " << y << "\n";

		// bool z{ 2 };
		// blad o uzyciu wartosci typu int
	}
}