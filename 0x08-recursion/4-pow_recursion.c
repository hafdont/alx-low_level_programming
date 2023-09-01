#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Calculate the value of a number raised toanother
 * @x: the base digit
 * @y: the power
 * Return: the result of X raised to the power of Y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
