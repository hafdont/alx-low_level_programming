#include <stdio.h>

/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int nambari;
	long int nambari_kubwa;
	long long int nambari_jikubwa;
	char karakta;
	float desimoli;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(karakta));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(nambari));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(nambari_kubwa));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(nambari_jikubwa));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(desimoli));
	return (0);
}
