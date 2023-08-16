#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num1, num2;

    for (num1 = 0; num1 <= 98; num1++)
    {
        for (num2 = num1 + 1; num2 <= 99; num2++)
        {
            putchar((num1 / 10) + '0'); // Print tens digit of num1
            putchar((num1 % 10) + '0'); // Print ones digit of num1
            putchar(' '); // Print space
            putchar((num2 / 10) + '0'); // Print tens digit of num2
            putchar((num2 % 10) + '0'); // Print ones digit of num2

            if (num1 < 98 || num2 < 99)
            {
                putchar(','); // Print comma
                putchar(' '); // Print space
            }
        }
    }
    putchar('\n'); // Print newline

    return (0);
}

