#include <iostream>
#include <stdlib.h>

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

	void clear_iostream()
	{
		std::cin.clear(); // czyszczenie flag bledow w strumieniu 
		std::cin.ignore(); // odrzucenie danych ktore wywolaly bledy 
	}

	/*
	void open_file(std::string name_file)
	{
		std::cout << "czy otworzyc plik " << name_file << " (y/n): ";
		char x;
		std::cin >> x;

		if (x == 'y')
		{
			if(name_file == "01_float.h")
				system("explorer /select, .\\..\\..\\andariel\\01_float.h");
			else
				system("explorer /select, .\\..\\..\\andariel\\01_enum.h");
		}
	}
	*/
}
namespace ft = fun3at;