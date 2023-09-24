#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_opcodes - Print the opcodes of  afunction
 * @addr: Address of the gunction
 * @bytes: NUmber of bytes to print
 */

void print_opcodes(void *addr, int bytes)
{
	unsigned char *opcodes = (unsigned char *)addr;
	int i;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", opcodes[i]);
		if (i < bytes - 1)
			printf(" ");
	}

	printf("\n");
}

/**
 * main - entry point of the  program
 * @argc: Number of arguments
 * @argv: Array of  argument string
 * Return: A on succes, 1 for incorrect arguments, 2 for negative bytes
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	int bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(main, bytes);

	return (0);
}
