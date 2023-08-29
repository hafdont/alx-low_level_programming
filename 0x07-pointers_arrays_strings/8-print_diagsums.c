#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print the sum of i want to sleep
 * @a: i gotta sleep
 * @size: sleep
 * Return: sleep sleep sleep goddamn it
 */
void print_diagsums(int *a, int size)
{
	int i, sum_diag1 = 0, sum_diag2 = 0, s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		sum_diag1 += a[i];
	}

	for (i = size - 1; i < s - 1; i += size - 1)
	{
		sum_diag2 += a[i];
	}

	printf("%d, %d\n", sum_diag1, sum_diag2);
}
