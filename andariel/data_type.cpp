#include <iostream>

namespace fun3at
{
	void data_type() // DEFINICJA funkcji (patrz data_types.h)
	{
		std::cout <<
			R"(
I. DEKLARACJA TYPU
 W c++ kazdy obiekt zanim zostanie uzyty, musi zostac wczesniej zdeklarowyna;
 DEKLARACJA == informuje kompilator, ze dana nazwa reprezentuje obiek jakiegos typu;
            == nie rezerwuje dla niego miejsca w pamieci;
					
 DEFINICJA == dodatkowo rezewuje miejsce w pamieci;
           == jest miejscem w programie, gdzie powoluje sie obiekt do zycia;

II. SPECYFIKATOR TYPU
 1. signed;
  == ze znakiem;
  == default;
  == signed char x = -128..127;

 2. unsigned; 	
  == bez znaku;
  == tylko dodatnie wartosci;
  == unsigned char x = 0..255;

***********
III. DWA PODZIALY TYPOW
 1. podzial:
  I. FUNDAMENTALNE
  == najbardziej podstawowe:
   a) liczby calkowite;
    * int;
    * short int       // krocej short;
    * long int       // krocej long;
    * long long int // krocej long long;
	* typ wyliczeniowy enum;
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
	& referencja - inaczej przezwisko jakiegos obiektu; dzieki referencji te sama zmienna mozna okreslic uzywajac jej drugiej nazwy;
 2. podzial	
  I. WBUDOWANE
   == standardowo wyposazone;
    1. limity ograniczen typow wbudowanych;				

  II. ZDEFINOWANE PRZEZ USR
   == mozesz sobie wymyslic;
		
)";
	}
}