#include <iostream>
#include "global.h"

#include "01_enum.h"

namespace fun3at
{
	void enum_t(const bool& choice_clean)
	{
		clear_system(choice_clean);
		definition_type_enum();
			whether_display(1, "enum_creating_list");
			press_enter();

		clear_system(choice_clean);
		definition_var_enum();
			whether_display(2, "enum_numerical_value");
			press_enter();
			
		clear_system(choice_clean);
		example();
			press_enter();

		clear_system(choice_clean);
		enumerated_list();
			press_enter();

		clear_system(choice_clean);
		comparing_enumerated_elements();
			press_enter();

		clear_system(choice_clean);
		typ_podwaliny_i_alias_enum();
			press_enter();

		clear_system(choice_clean);
		numerical_value_and_const_entire();
			whether_display(4, "enum_const_entire");
			press_enter();
		
		preper_file("01_enum.cpp");
	}

	void definition_type_enum()
	{
		std::cout <<
			R"(
I. DEFINIOWANIE TYPU WYLICZENIOWEGO ENUM.
-------
-- 1. Definiuje typ enum:
	
	$ enum struct <nazwa typu enum> {<lista wyliczeniowa>};
		// tz. zwykly enum (ze wzgledu na struct);
		// zakres listy wyliczeniowej jest taki sam jak miejsce jego definicji (pliku);
	or

	$ enum class <nazwa typu enum> {<lista wyliczeniowa>};
		// tz. zakresowe enum (ze wzgledu na class)
		// bardziej bezpieczny
	or 
	
	$ enum <nazwa typu enum> {<lista wyliczeniowa>};	
)";

	}
	void definition_var_enum()
	{
		std::cout <<
			R"( 
-------
-- 2. Definowanie zmienna tego typu:
	>> przypisuje sie do tej zmiennej wartosci z <listy wyliczeniowej>;

	$ <nazwa typu enum> zmienna;
	
		== do obiektu typu wyliczeniowego nie wolno wstawiac wartosci liczbowej;
		== nawet takiej ktora jest na jego liscie wyliczeniowej;
		
		# BLEDNY ZAPIS
		$ zmienna = 0;
)";

	}
	void example()
	{
		std::cout <<
			R"(
II. PRZYKLAD.

	enum struct Takcja 
	{
		start_pomiaru = 0,
		odczyt_pomiaru = 1,
		zmiana_probki = 54,
		zniszczenie_probki = 55
	};
	Takcja co_robic; 
	
	co_robic::Takcja::zmiana_probki;
	co_robic::Takcja::zniszczenie_probki;

)";

	}
	void enumerated_list()
	{
		std::cout <<
			R"(
III. LISTA WYLICZENIOWA 
	>> przy poszczegolnych nazwach listy wyliczeniowej moga, ale nie musza stac wartosci liczbowe;


	>> kompilator zacznie od '0' i bedzie inkrementowal wartosci;
		# start_pomiaru,
		# odczyt_pomiaru, // zdobedzie wartosc 1;

	>> 2 elementy listy moga miec te sama wartosc;
		# nowy = 3,
		# stary = nowy, 
			// robi sie tak, gdy chcesz nadac dwie nazwy na te sama akcje
		# koniec = nowy + stary - 2,
)";

	}
	void comparing_enumerated_elements()
	{
		std::cout <<
			R"(
IV. POROWNYWANIE ELEMENOW Z LISTY
	
	$ if(co_robic == Takcja::odczyt_pomiaru)
)";

	}
	void typ_podwaliny_i_alias_enum()
	{
		std::cout <<
			R"(
V. TYP PODWALINY
	>> jesli nie zazadamy okreslonego typu (podwaliny), domyslnie 'int';
	>> musi byc to typ calkowity;
		
		1. Definiowanie z wybranym typem
			$ enum struct <nazwa_typu> : char {<lista wyliczeniowa>};	
)";

	}
	void numerical_value_and_const_entire()
	{
		std::cout <<
			R"( 
VII. DOSTANIE SIE DO WARTOSCI LICZBOWEJ
		$ int moc_silnikow = static_cast<int>(telegraf);

VII. DEFINIOWANIE STALYCH CALKOWITYCH Z ENUM
	>> definicja enum bez nazwy wykorzystujemy wtedy, gdy nie zalezy nam na obiektach tego typu;
	>> robimy tak gdy checmy zdefiniowac <stale calkowite>
	
		1. definicja z enum
			$ enum { stala_liczba = 8 };	
	
		2. klasycza instrukcja
			$ constexpr int stala_liczba = 8;
)";
}

	void enum_creating_list()
	{

		/* definiuje typ z domyslna podwalina typu : int */
		enum struct dni_mc /* definiowanie typu wyliczeniowego enum o nazwie T.... */
		{
			pierwszy = 1,
			drugi = 2,
			trzeci,
			czwarty,
			piaty, // wartosc 5
			szosty = 8, // zmiana wartosci
			siodmy, // wartosc 9
			osmy,
			dziewiaty = osmy, // 2 nazwy dla akcji
			nawet_wzor = dziewiaty + trzeci - 2

		};
		// unreferenced local variable C4101
		// dni_mc ktory_dzien;

		dni_mc ktory_dzien = dni_mc::pierwszy;
		/* CZAS DOSTAC SIE DO WARTOSCI LICZBOWEJ */
		int x = static_cast<int>(ktory_dzien);
		std::cout << "dzisiaj jest " << x << " dzien miesiaca \n";
	}
	void enum_numerical_value()
	{
		enum struct Tpraca_silnikow
		{
			cala_wstecz = -100,
			pol_wstecz = -50,
			wolno_wstecz = -25,
			bardzo_wolno_wstecz = -5,
			stop = 0,
			bardzo_wolno_naprzod = 5,
			wolno_naprzod = 25,
			pol_naprzod = 50,
			cala_naprzod = 100
		};

		enum Totwarzanie
		{
			play,
			stop,
			pause = 16,
			przewin
		};


		std::cout << "kapitan na statku sygnalizuje telegrafem \n";

		/* definiuje obiekt i przypisuje wartos */
		Tpraca_silnikow telegraf = Tpraca_silnikow::stop;

		telegraf = Tpraca_silnikow::bardzo_wolno_naprzod;

		// CZAS NA ALIAS
		using Tsilniki = Tpraca_silnikow;

		std::cout << "kapitan decyduje plynac szybciej \n";
		telegraf = Tsilniki::pol_naprzod;

		std::cout << "co na ta komende robi mechanik?\n";
		std::cout << "mowi mechanik: kapitan pszyslal zaszyfrowany rozkaz \n";
		std::cout << "odyfruje go w maszynie odszyfrowujacej \n";

		switch (telegraf)
		{
		case Tsilniki::cala_naprzod:
			std::cout << "cala naprzod \n";
			break;
		case Tsilniki::bardzo_wolno_naprzod:
			std::cout << "bardzo wolno naprzod \n";
			break;
		case Tsilniki::wolno_naprzod:
			std::cout << "wolno naprzo \n";
			break;
		case Tsilniki::pol_naprzod:
			std::cout << "pol naprzod \n";
			break;
		case Tsilniki::stop:
			std::cout << "stop \n";
			break;
		case Tsilniki::bardzo_wolno_wstecz:
			std::cout << "bardzo wolno wstecz \n";
			break;
		case Tsilniki::wolno_wstecz:
			std::cout << "wolno wstecz \n";
			break;
		case Tsilniki::pol_wstecz:
			std::cout << "pol wstecz \n";
			break;
		case Tsilniki::cala_wstecz:
			std::cout << "cala wstecz \n";
			break;
		}

		// CZAS DOSTAC SIE DO WARTOSCI LICZBOWEJ
		int moc_silnikow = static_cast<int>(telegraf);
		std::cout << "co oznacza " << moc_silnikow << "% mocy silnikow \n";
	}
	/*
		void enum_alias()
	{
		enum class long_name_for_enum
		{
			start,
			stop
		};
		using short_name = long_name_for_enum;


	}
	*/
	void enum_const_entire()
	{
		// CZAS NA DEFINICJE STALYCH CALKOWITYCH
		enum
		{
			liczba_kotwic = 2,
			liczba_silnikow = 6
		};
		for (int k{ 0 }; k < liczba_kotwic; ++k)
		{
			std::cout << "opuszczamy kotwice nr " << k + 1 << "(z " << liczba_kotwic << ") \n";
		}
	}

	void whether_display(const int& control, std::string name_function)
	{
		std::cout << "czy uruchomic funkcje? " <<name_function << " y/n :";
			char x;
			std::cin >> x;
			clear_iostream();
		if (x == 'y')
		{
			switch (control)
			{
				case 1: enum_creating_list(); break;
				case 2: enum_numerical_value(); break;
				// case 3: enum_alias(); break;
				case 4: enum_const_entire(); break;
			}
		}
	}
}