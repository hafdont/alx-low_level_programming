#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 ...
 */
int main(void)
{
int q;
for (q = 0; q <= 9; q++)
{
putchar((q % 10) + '0');
if (q == 9)
	continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
