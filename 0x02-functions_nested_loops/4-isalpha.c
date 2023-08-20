#include "main.h"

/**
 * _isalpha - checks whether a variable s a character
 *
 * @c: the variable checked
 *
 * to uppercase and lowercase letters if they are 1 is returned
 * anything ese is a 0
 *
 * Return: 1 (Succes)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);
	else
		return (0);
}
