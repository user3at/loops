#include "menu.h"

int main()
{
	bool control_back{ 1 };
	do
	{
		fun3at::menu_main();
	} while (control_back != 0);
}