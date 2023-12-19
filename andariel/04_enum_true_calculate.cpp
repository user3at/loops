#include <iostream>
#include <string>
#include "01_enum.h"
#include "04_enum_true_calculate.h"

namespace fun3at
{
	enum class operacje_wyboru : int
	{
		dodawanie = 1,
		odejmowanie = 2,
		mnozenie = 3,
		dzielenie = 4
	};
	operacje_wyboru zmienna_operacji_wyboru{};

	void true_calculate()
	{
		std::cout << "dodawanie \n";
		std::cout << "odejmowanie \n";
		std::cout << "mnozenie \n";
		std::cout << "dzielenie \n";

		std::string choice;
		getline(std::cin, choice);

		fun_przypisujaca_zmienna_operacji_wyboru(choice, zmienna_operacji_wyboru);
		fun_wyboru_operacji(zmienna_operacji_wyboru);
	}

	void fun_przypisujaca_zmienna_operacji_wyboru(std::string choice, operacje_wyboru& zmienna_operacji_wyboru)
	{
		if (choice == "dodawanie")
		{
			zmienna_operacji_wyboru = operacje_wyboru::dodawanie;
		}
		else if (choice == "odejmowanie")
		{
			zmienna_operacji_wyboru = operacje_wyboru::odejmowanie;
		}
		else if (choice == "mnozenie")
		{
			zmienna_operacji_wyboru = operacje_wyboru::mnozenie;
		}
		else if (choice == "dzielenie")
		{
			zmienna_operacji_wyboru = operacje_wyboru::dzielenie;
		}
		else
			std::cout << "blad \n";
	}

	void fun_wyboru_operacji(operacje_wyboru zmienna_operacji_wyboru)
	{
		// dzialanie switch, a dokladnie jego konekscji z podrzedna instrukcja musza wskazac na rownosc
		// wartosc przekazana do zmienna_operacji_wyboru musi byc taka sam jak case operacje_wyboru::<element_z_listy>
		// if(zmienna_operacji_wyboru == operacje_wybour::dodawanie)
		//		dodawanie();
		switch (zmienna_operacji_wyboru)   // jesli zmienna_operacji_wyboru o wartosci "dodawanie"
		{								  // bedzie taka sama jak 
		case operacje_wyboru::dodawanie: // ten case, to nastapi:
		{				  // w tym bloku kodu
			dodawanie(); // wywolanie elementu z listy
		}
		break;
		case operacje_wyboru::odejmowanie:
			odejmowanie();
			break;
		case operacje_wyboru::mnozenie:
			mnozenie();
			break;
		case operacje_wyboru::dzielenie:
			dzielenie();
			break;
		}
	}

	void dodawanie()
	{
		std::cout << "dodalo \n";
	}
	void odejmowanie()
	{
		std::cout << "odjelo \n";
	}
	void mnozenie()
	{
		std::cout << "pomnozylo \n";
	}
	void dzielenie()
	{
		std::cout << "podzielilo \n";
	}
}