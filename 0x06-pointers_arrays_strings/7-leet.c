#include "main.h"
#include <string.h>
/**
**leet - encodes a string
*@str:- string input
* Return: encoded string
*/
char *leet(char *str)
{
	char *result = str;
	char leet_map[256] = {0};
	char *letters = "aeotlAEOTL";
	char *replacements = "4307143071";
	
	for (int i = 0; letters[i] != '\0'; i++)
	{
		leet_map[(unsigned char)letters[i]] = replacements[i];
	}
	 
	while (*str  != '\0')
	{
		if (leet_map[(unsigned char)*str])
		{
			*str = leet_map[(unsigned char) *str];
		}
		str++;

		return (result);
	}
}
