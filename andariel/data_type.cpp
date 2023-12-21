#include <iostream>
#include "menu_type.h"
#include "global.h"

namespace fun3at
{
	int data_type(int& control_back) 
	// DEFINICJA funkcji (patrz data_types.h)
	//void data_type() // DEFINICJA funkcji (patrz data_types.h)
	{
		bool choice_clear = clean_screen();
			clear_system(choice_clear);
			clear_iostream();

		declaration_and_definition_type();
			
			press_enter();
			clear_system(choice_clear);

		specifier_type();
			press_enter();
			clear_system(choice_clear);

		first_division_type();
			press_enter();
			clear_system(choice_clear);

		second_division_type();
			press_enter();
			clear_system(choice_clear);

		fun3at::menu_type(choice_clear);

		return control_back;
	}

	void declaration_and_definition_type()
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
	void specifier_type()
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
	void first_division_type()
		// division / dewiz.ion / podzial
	{
		std::cout <<
			R"(
III. DWA PODZIALY TYPOW
*** 
* 1. podzial:
*
-------
--- T1. FUNDAMENTALNE
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

-------
--- T2. ZLOZONE
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
	void second_division_type()
	{
		std::cout <<
R"(
***
* 2. podzial	
*
 
   I. WBUDOWANE
    == standardowo wyposazone;
     >> 1. limity ograniczen typow wbudowanych;				

  II. ZDEFINOWANE PRZEZ USR
    == mozesz sobie wymyslic;		
)";
	}
}
