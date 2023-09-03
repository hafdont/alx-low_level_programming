#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - Entry point
*@argc: - number of args
*@argv: - string of args
*program that prints its name,
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		int i, sum = 0;

		for (i = 1; i < argc; i++)
		{
			char *num = argv[i];
			int j = 0;

			while (num[j] != '\0')
			{
				if (!isdigit(num[j]))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum += atoi(num);
		}
		printf("%d\n", sum);
	}
	return (0);
}
