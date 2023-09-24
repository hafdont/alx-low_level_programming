#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: The new na,e to be printed.
 * @f: A pointer to a functionthat prints a string
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
