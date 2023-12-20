#include <iostream>
#include "menu_type.h"
#include "global.h"

namespace fun3at
{
	int data_type(int& control_back) // DEFINICJA funkcji (patrz data_types.h)
	//void data_type() // DEFINICJA funkcji (patrz data_types.h)
	{
		std::cout << "czyscic ekran? y/n \n";
		char choice;
		std::cin >> choice;
		system_clear(choice);
		clear_iostream();

		deklaracja_i_definicja_typow();
		std::cin.get();
		system_clear(choice);

		specyfikator_typow();
		std::cin.get();
		system_clear(choice);

		pierwszy_podzial_typow();
		std::cin.get();
		system_clear(choice);

		drugi_podzial_typow();
		std::cin.get();
		system_clear(choice);

		fun3at::menu_type();

		return control_back;
	}

	void deklaracja_i_definicja_typow()
	{
		std::cout << 
R"(
I. DEKLARACJA TYPU
 W c++ kazdy obiekt zanim zostanie uzyty, musi zostac wczesniej zdeklarowyna;
 DEKLARACJA == informuje kompilator, ze dana nazwa reprezentuje obiek jakiegos typu;
            == nie rezerwuje dla niego miejsca w pamieci;
			data_type.h
			void declaration();
				
 DEFINICJA == dodatkowo rezewuje miejsce w pamieci;
           == jest miejscem w programie, gdzie powoluje sie obiekt do zycia;
		   data_type.cpp
		   void declaration()
		   {
			// definition;
		   }
)";
	}
	void specyfikator_typow()
	{
		std::cout <<
R"(
II. SPECYFIKATOR TYPOW
 1. signed;
  == ze znakiem;
  == default;
  signed char x = -128..127;

 2. unsigned; 	
  == bez znaku;
  == tylko dodatnie wartosci;
  unsigned char x = 0..255;

)";

	}
	void pierwszy_podzial_typow()
	{
		std::cout <<
			R"(
III. DWA PODZIALY TYPOW
 1. podzial:

 I. FUNDAMENTALNE
  == najbardziej podstawowe:
   a) liczby calkowite;
    * int;
        * typ wyliczeniowy enum;
    * short int       // krocej short;
    * long int       // krocej long;
    * long long int // krocej long long;
   b) liczby zmiennoprzecinkowe;
	* float;
	* double;
	* long double;
   c) znaki alfanumeryczne;
	* char;
   d) logiczne;
	* bool;

II. ZLOZONE
  == w swej istocie wykorzystuja istnienie jakiegos typu fundamentalnego;
  == wykorzystuje sie do tego operatory:
   [] - tablice obiektow danego typu;
    * - wskaznik do pokazywania na obiekty danego typu;
   () - funkcja zwracajaca wartosc danego typu;
    & - referencja (przezwisko) obiektu danego typu;				

[] tablice    - to inaczej maciez, albo wektor obiektow danego typu;
 * wskaznik   - to obiekt, w ktorym mozna umiescic adres jakiegos innego obiektu w pamieci;
() funkcja    - podprogram, ktory wykona okreslone zadanie;
 & referencja - inaczej przezwisko jakiegos obiektu; 
              == dzieki referencji te sama zmienna mozna okreslic uzywajac jej drugiej nazwy;

)";
}
	void drugi_podzial_typow()
	{
		std::cout <<
R"(
2. podzial	
 I. WBUDOWANE
  == standardowo wyposazone;
   1. limity ograniczen typow wbudowanych;				

 II. ZDEFINOWANE PRZEZ USR
  == mozesz sobie wymyslic;		
)";
	}
}
