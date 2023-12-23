#include <iostream>
#include <string>
#include "global.h"
#include "03_enum_days.h"

namespace fun3at
{
	enum class lista_dni : int
	{
		poniedzialek = 1,
		wtorek,
		sroda,
		czwartek,
		piatek,
		sobota,
		niedziela
	};
	lista_dni ktory_dzien{};

	void enum_days(const bool& choice_clean)
	{
		clear_system(choice_clean);

		std::cout << "wpisz dzien: \n";
		std::cout
			<< "$ poniedzialek \n" \
			<< "$ wtorek \n" \
			<< "$ sroda \n" \
			<< "$ czwartek \n" \
			<< "$ piatek \n" \
			<< "$ sobota \n" \
			<< "$ niedziela \n"
			;

		clear_iostream();
		std::string choice;
		getline(std::cin, choice);

		przypisanie_elementu_listy_do_ktory_dzien(choice, ktory_dzien);

		int nr_day = wybor_opcji_dla_dnia(ktory_dzien);
		concatenation("jest ", nr_day, " dniem; \n");
		//std::cout << ktory_dzien << " jest " << nr_day << " dniem; \n";
		//printf(" jest " << nr_day << " dniem; \n")

	}
	void przypisanie_elementu_listy_do_ktory_dzien(std::string choice, lista_dni& ktory_dzien)
	{
		if (choice == "poniedzialek")
			ktory_dzien = lista_dni::poniedzialek;
		else if (choice == "wtorek")
			ktory_dzien = lista_dni::wtorek;
		else if (choice == "sroda")
			ktory_dzien = lista_dni::sroda;
		else if (choice == "czwartek")
			ktory_dzien = lista_dni::czwartek;
		else if (choice == "piatek")
			ktory_dzien = lista_dni::piatek;
		else if (choice == "sobota")
			ktory_dzien = lista_dni::sobota;
		else if (choice == "niedziela")
			ktory_dzien = lista_dni::niedziela;
	}

	int wybor_opcji_dla_dnia(lista_dni ktory_dzien)
	{
		int nr_of_day{ 0 };
		switch (ktory_dzien)
		{
		case lista_dni::poniedzialek:
			// przypisanie(nr_of_day);
			nr_of_day = static_cast<int>(ktory_dzien);
			break;
		case lista_dni::wtorek:
			nr_of_day = static_cast<int>(ktory_dzien);
			break;
		case lista_dni::sroda:
			nr_of_day = static_cast<int>(ktory_dzien);
			break;
		case lista_dni::czwartek:
			nr_of_day = static_cast<int>(ktory_dzien);
			break;
		case lista_dni::piatek:
			nr_of_day = static_cast<int>(ktory_dzien);
			break;
		case lista_dni::sobota:
			nr_of_day = static_cast<int>(ktory_dzien);
			break;
		case lista_dni::niedziela:
			nr_of_day = static_cast<int>(ktory_dzien);
			break;
		default:
			obsluga_bledu();
			break;
		}
		return nr_of_day;
	}

	void obsluga_bledu()
	{
		std::cout << "you did somethig wrong. program to clouse \n";
		system("pause");
		exit(0);
	}
}