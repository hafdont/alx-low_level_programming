#include "main.h"

/**
 * _abs - computes the absolute error of an integer
 *
 * @n: the variable whose value will be checked
 *
 * Desription: the value of n is calculated from apoint 0
 * then the negate is returned
 *
 * Return: 'n'  as the absolute value of the integer (Success)
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
