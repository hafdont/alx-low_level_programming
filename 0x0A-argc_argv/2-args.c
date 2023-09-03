#include <stdio.h>

/**
 * main - entry point
 * @argc: The number of arguments
 * @argv: An array containing arguments
 *
 * Return: Always 0 (Succes)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
