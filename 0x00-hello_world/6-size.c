#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A script that prints out the size of
 * different data types in C
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(long long));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(float));
	return (0);
}
