#include <iostream>
#include "01_enum.h"

#include "global.h"

namespace fun3at
{
	void enum_t()
	{
		std::cout << "czyscic ekran? y/n \n";
		char choice;
		std::cin >> choice;
		system_clear(choice);

		definiowanie_typu();
		czy_wyswietlic(1);
		system_clear(choice);

		definiowanie_zmiennej();
		czy_wyswietlic(2);
		system_clear(choice);

		lista_wyliczeniowa();
		porownianie_elementow();
		typ_podwaliny_i_alias();
		wartosci_liczowe_i_stale_calkowite();
		czy_wyswietlic(4);
		system_clear(choice);
	}

	void definiowanie_typu()
	{
		std::cout <<
			R"(
I. DEFINIOWANIE TYPU WYLICZENIOWEGO ENUM.
1. Definiuje typ enum:
	
	$ enum struct <nazwa typu enum> {<lista wyliczeniowa>};
		// tz. zwykly enum (ze wzgledu na struct);
		// zakres listy wyliczeniowej jest taki sam jak miejsce jego definicji (pliku);
	or

	$ enum class <nazwa typu enum> {<lista wyliczeniowa>};
		// tz. zakresowe enum (ze wzgledu na class)
		// bardziej bezpieczny
	or 
	
	$ enum <nazwa typu enum> {<lista wyliczeniowa>};	
		
	==>>> Sprawdz: void enum_tworzenie_listy();
)";

	}
	void definiowanie_zmiennej()
	{
		std::cout <<
			R"( 
2. Definowanie zmienna tego typu:
	>> przypisuje sie do tej zmiennej wartosci z <listy wyliczeniowej>;

	$ <nazwa typu enum> zmienna;
	
		== do obiektu typu wyliczeniowego nie wolno wstawiac wartosci liczbowej;
		 == nawet takiej ktora jest na jego liscie wyliczeniowej;	
		
		# BLEDNY ZAPIS
		$ zmienna = 0;
)";

	}
	void przyklad()
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
	
	==>>> Sprawdz void enum_wartosc_liczbowa();	
)";

	}
	void lista_wyliczeniowa()
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
	void porownianie_elementow()
	{
		std::cout <<
			R"(
IV. POROWNYWANIE ELEMENOW Z LISTY
	
	$ if(co_robic == Takcja::odczyt_pomiaru)
)";

	}
	void typ_podwaliny_i_alias()
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
	void wartosci_liczowe_i_stale_calkowite()
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

	==>>> sprwch void enum_staly();
)";

	}
	
	void enum_tworzenie_listy()
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
		system("pause");
	}
	void enum_wartosc_liczbowa()
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

		system("pause");
	}
	void enum_alias()
	{
		enum class long_name_for_enum
		{
			start,
			stop
		};
		using short_name = long_name_for_enum;


	}
	void enum_staly()
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
		system("pause");
	}

	void czy_wyswietlic(const int& control)
	{
		std::cout << "czy uruchomic funkcje? y/n :";
		char x;
		std::cin >> x;
		if (x == 'y')
		{
			switch (control)
			{
			case 1: enum_tworzenie_listy(); break;
			case 2: enum_wartosc_liczbowa(); break;
		 // case 3: enum_alias(); break;
			case 4: enum_staly(); break;
			}
		}

	}
}