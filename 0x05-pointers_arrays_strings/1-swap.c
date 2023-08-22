#include "main.h"

/**
 * swap_int - a function that swaps the value of two intergers
 * @a, @b:  thw tw integers whose values are swapped 
 *
 * Desription: this prgram works b first string aintegers vlue 
 * in a temprary hlding place before replacing it 
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int temporary_holding;

	temporary_holding = *b;
	*b = *a;
	*a = temporary_holding;
}
