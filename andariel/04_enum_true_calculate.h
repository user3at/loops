#pragma once
#include <iostream>

namespace fun3at
{
	void true_calculate(char choice_clean);
	enum class operacje_wyboru : int;
	void fun_przypisujaca_zmienna_operacji_wyboru(std::string choice, operacje_wyboru& zmienna_operacji_wyboru);
	void fun_wyboru_operacji(operacje_wyboru zmienna_operacji_wyboru);
	void dodawanie();
	void odejmowanie();
	void mnozenie();
	void dzielenie();
}