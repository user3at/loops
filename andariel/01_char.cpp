#include <iostream>
//#include <wchar.h>
namespace fun3at
{
	void char_t()
	{
		std::cout << "sprawdz kod \n";

		/* trzy odrebne typy */
		char x{ 'y' };
		signed char y{ 'x' };
		unsigned char z{ 'z' };
		std::cout << x << "\n";

		/* zwykly typ char */
		// przewa?nie przechowuje tylko znaki z podstawowego zestawu 256 liter i znakow

		/* wprowadzony wchar_t */
		// ang. wide character = szeroki 
		// nadaje sie do przechowywanie znakow z zestawu UNICODE

		// wchar_t xyz{ L"c" };
		// std::cout << xyz << "\n";
		// >> zmien language standard na c++20

		/* korzystanie z char 16 lub 32 bitowego */
		//char16_t t16 = 'x';
		//std::cout << t16 << "\n";

		//char32_t t32 = 'y';
		// std::cout << t32 << "\n";

	}
}
