#include "main.h"

void jack_bauer(void)
{
	int h1, h2, m1, m2;

	for (h1 = 0; h1 < 24: h1++)
	{
		for (h2 = 0; h2 < 10; h2++)
		{
			for (m1 = 0; m1 < 6; m1++) 
			{
				for (m2 = 0; m2 < 10; m2++)
				{
					_putchar('0' + h1 / 10);
					_putchar('0' + h1 % 10);
					_putchar(':');
					_putchar('0' + h2);
					_putchar('0' + m1);
					_putchar(':');
					_putchar('0' + m2);
					_putchar('0'); 
					_putchar('\n');
				}
			}
		}
	}
}
