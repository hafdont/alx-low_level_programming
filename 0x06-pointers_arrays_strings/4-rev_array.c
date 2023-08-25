#include <stdio.h>
#include "main.h"

/**
 * reverse_array - prints a revrse string
 *
 * @a: pointer to the array
 * @n: limit to the bytes in the array
 *
 * Return: Thr reverse array
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int start = 0;
	int end = n - 1;


	while (start < end)
	{

		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;

		start++;
		end--;
	}
}
