#pragma once

#include "01_int.h"

#include "01_float.h"
#include "02_double.h"
#include "03_long_double.h"

#include "01_char.h"

#include "01_bool.h"
#include "02_bool_check.h"
#include "03_george_bool.h"

#include "01_enum.h"
#include "02_calculate.h"
#include "03_enum_days.h"
#include "04_enum_true_calculate.h"

namespace fun3at
{
	int data_type(int& control_back);
	//void data_type();
	void declaration_and_definition_type();
	void specifier_type();
	void first_division_type();
	void second_division_type();

	void whether_display(const int& control, std::string name_function);
}
