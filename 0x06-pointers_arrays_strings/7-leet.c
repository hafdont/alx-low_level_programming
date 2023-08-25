#include "main.h"
#include <string.h>
/**
**leet - encodes a string
*@str:- string input
* Return: encoded string
*/
char *leet(char *str)
{
	int i;
	int size = strlen(str);

	for (i = 0; i < size; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
			str[i] = '4';
		else if (str[i] == 'e' || str[i] == 'E')
			str[i] = '3';
		else if (str[i] == 'o' || str[i] == 'O')
			str[i] = '0';
		else if (str[i] == 't' || str[i] == 'T')
			str[i] = '7';
		else if (str[i] == 'l' || str[i] == 'L')
			str[i] = '1';
	}
	return (str);
}
