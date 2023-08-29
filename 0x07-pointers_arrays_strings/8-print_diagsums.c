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
	int i, sum_diag1 = 0, sum_diag2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_diag1 += a[i * size + i];
		sum_diag2 += a[i * size + (size - 1 - i)];
	}

	printf("Sum of digonal: %d\n", sum_diag1);
	printf("Sum of diagonal: %d\n", sum_diag2);

}
