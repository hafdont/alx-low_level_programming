#include "main.h"
/** 
 * main - Entry point 
 *
 * Description: A program that checks whether a program is lowercase 
 * Return: 1 if c is lowercase, 0 othersise 
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}
