#include <iostream>
#include <stdlib.h>
#include "global.h"
//#include <WinBase.h>

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
	void press_enter()
	{
		std::cout << "press enter";
		std::cin.get();
	}

	bool clean_screen()
	{
		std::cout << "do you clean the screen? y/n \n";
		char choice;
		std::cin >> choice;

		if (choice == 'y')
		{
			return 1;
		}
		else
			return 0;
	}
	void clear_system(const bool& choice_clear)
	{
		if (choice_clear)
			system("clear");
	}
	void clear_iostream()
	{
		std::cin.clear(); // czyszczenie flag bledow w strumieniu 
		std::cin.ignore(); // odrzucenie danych ktore wywolaly bledy 
	}


	void preper_file(std::string name_file)
	{

		enter(2);
			std::cout << "Czy przygotowac plik " << name_file << " do otwarcia? (y/n): ";
		enter(1);

		char x;
		std::cin >> x;

		if (x == 'y')
		{
			//set_elements(name_file, element_of_list);
			open_file(name_file);
		}
		else if (x != 'n' && x != 'y')
		{
			std::cout << "wprowadz poprawna wartosc \n";
		}

	}
		void open_file(std::string name_of_file)
		{
		if (name_of_file == "01_int.cpp")
			system("explorer /select, .\\..\\..\\andariel\\01_int.cpp");

		else if (name_of_file == "01_enum.cpp")
			system("explorer /select, .\\..\\..\\andariel\\01_enum.cpp");

		else if (name_of_file == "02_calculate.cpp")
			system("explorer /select, .\\..\\..\\andariel\\02_calculate.cpp");

		else if (name_of_file == "03_enum_days.cpp")
			system("explorer /select, .\\..\\..\\andariel\\03_enum_days.cpp");

		else if (name_of_file == "04_enum_true_calculate.cpp")
		{
			system("explorer /select, .\\..\\..\\andariel\\04_enum_true_calculate.cpp");
			//WinExec(String("explorer /n, /select," + name_of_file), c_str(), SW_SQRTNEGhowdefault);
			//WinExec(".\\..\\..\\andariel\\04_enum_true_calculate.cpp", SW_HIDE);
		}

		else if(name_of_file == "01_float.cpp")
			system("explorer /select, .\\..\\..\\andariel\\01_float.cpp");

		else if(name_of_file == "02_double.cpp")
			system("explorer /select, .\\..\\..\\andariel\\02_double.cpp");

		else if(name_of_file == "03_long_double.cpp")
			system("explorer /select, .\\..\\..\\andariel\\03_long_double.cpp");

		else if(name_of_file == "01_char.cpp")
			system("explorer /select, .\\..\\..\\andariel\\01_char.cpp");

		else if(name_of_file == "01_bool.cpp")
			system("explorer /select, .\\..\\..\\andariel\\01_bool.cpp");

		else if(name_of_file == "02_bool_check.cpp")
			system("explorer /select, .\\..\\..\\andariel\\02_bool_check.cpp");

		else if(name_of_file == "03_george_bool.cpp")
			system("explorer /select, .\\..\\..\\andariel\\03_george_bool.cpp");
		}
}
namespace ft = fun3at;