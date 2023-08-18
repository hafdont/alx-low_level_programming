#include"main.h"

/**
*main-Entrypoint
*
*
*Description:Aprogramthatprintsnumbers0t09
*
*Return:Always0(Success)
*/
void print_numbers(void)
{
	int i;
	
	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}

	_putchar('\n');
}
