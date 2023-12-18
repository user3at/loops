#pragma once
#include <iostream>

namespace fun3at
{
	enum class lista_dni : int;
	void enum_days();
	void przypisanie_elementu_listy_do_ktory_dzien(std::string choice, lista_dni& ktory_dzien);
	int wybor_opcji_dla_dnia(lista_dni ktory_dzien);
	void obsluga_bledu();
}
