#include "global.h"
#include "menu.h"

int main()
{
	int control_back{ 1 };
	do
	{
		ft::main_menu(control_back);
	} while (control_back != 0);
}