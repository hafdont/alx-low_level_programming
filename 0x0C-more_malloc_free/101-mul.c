#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_integer - Check if a string is composed of digits
 * @str: The input string to check
 *
 * Return: if the string is positive is positive, 0 on othersie
 */

int is_positive_integer(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * main - Entry point
 * @argc: the arguments
 * @argv: another set of arguments
 *
 * Return: 0  always (success)
 */

unsigned long multiply(unsigned long num1, unsigned long num2)
{
	return (num1 * num2);
}

int main(int argc, char *argv[])
{
	unsigned long num1;
	unsigned long num2;
	unsigned long result;

	if (argc != 3 || !is_positive_integer(argv[1]) ||
			!is_positive_integer(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = strtoul(argv[1], NULL, 10);
	num2 = strtoul(argv[2], NULL, 10);
	result = multiply(num1, num2);

	printf("%lu\n", result);

	return (0);
}
