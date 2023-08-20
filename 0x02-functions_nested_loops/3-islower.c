#include "main.h"
/**
 * _islower - A program that checks whether a program is lowercase
 * or uppercase
 *
 * @c: is checked whether
 * its uppercase or lowercase
 *
 * Return: 1 if c is lowercase, 0 othersise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
