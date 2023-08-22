#include "main.h"

/**
 * rev_string - function that prints a string in reverse
 *
 * @s: the variable that hold the string to be printed
 *
 * Return: void
 *
 * Description: another good use of the null emulator
 *  and the temporary holding space
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;
	char tmp;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;

		start++;
		end--;
	}
}
