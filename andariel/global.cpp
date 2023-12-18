#include <iostream>

namespace fun3at
{
	void concatenation(std::string a, int b, std::string c)
	{
		std::cout << a << b << c;
	}

	void enter(short how_many)
	{
		for (short i{ 0 }; i < how_many; i++)
		{
			std::cout << "\n";
		}
	}

	void system_clear(const char& choice)
	{
		if (choice == 'y')
			system("clear");
	}
}
namespace ft = fun3at;