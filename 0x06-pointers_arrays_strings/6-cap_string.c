#include "main.h"
#include <ctype.h>
/**
*cap_string - capitalises a string
*@str:- string input
* Return: capitalised string
**/
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (isalpha(str[i]) && (i == 0 || !isalpha(str[i - 1])))
			str[i] = toupper(str[i]);
	}
	return (str);
}
