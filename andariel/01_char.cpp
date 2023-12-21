#include <iostream>
//#include <wchar.h>
#include "global.h"

namespace fun3at
{
	void char_t()
	{
		std::cout << "char_t() \n";

		/* trzy odrebne typy */
		char x{ 'x' };
		signed char y{ -127 };
		unsigned char z{ 255 };

			std::cout << "char x = " << x << "\n";
			std::cout << "signed char y = " << y << "\n";
			std::cout << "unsigned char z = " << z << "\n";

		/* zwykly typ char */
		// przewaznie przechowuje tylko znaki z podstawowego zestawu 256 liter i znakow

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
	
		preper_file("01_char.cpp");
	}
}
