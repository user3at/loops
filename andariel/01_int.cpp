#include <iostream>
#include "global.h"

namespace fun3at
{
	void int_t()
	{
		std::cout << "int_t() \n";

		short int short_int_t{ 16 };
		int int_t{ 32 };
		long int long_int{ 64 };
		long long int long_long_int{ 64 };

		std::cout << "short_int_t has " << short_int_t << " bites \n";
		std::cout << "int_t has " << int_t << " bites \n";
		std::cout << "long_int has " << long_int << " bites\n";
		std::cout << "long_long_int has " << long_long_int << " bites \n";

		/* przypisanie wartosci */
		short x = 34;
		std::cout << "x is equal " << x << "\n";

		//enter(2);
		/* inicjalizacja wartosci */
		// short x{ 43.45 };
		// inicjalizacja zapobiega bleda;


		// short x = 43.43;
		// dobry kompilator poinformuje o bledzie;
		// inny kompilator zaokragli wartosc do liczby calkowitej, nie informujac o tym;

		/* bezpieczniej */
		// uzywac inicjalizacji wartosci podczas definiowania;


		preper_file("01_int.cpp");
	}
}