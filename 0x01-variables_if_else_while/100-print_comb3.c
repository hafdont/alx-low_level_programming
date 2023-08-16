#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int tens_digit, ones_digit;

    for (tens_digit = 0; tens_digit <= 8; tens_digit++)
    {
        for (ones_digit = tens_digit + 1; ones_digit <= 9; ones_digit++)
        {
            putchar(tens_digit + '0'); // Print tens digit
            putchar(ones_digit + '0'); // Print ones digit

            if (tens_digit < 8 || ones_digit < 9)
            {
                putchar(','); // Print comma
                putchar(' '); // Print space
            }
        }
    }
    putchar('\n'); // Print newline

    return (0);
}

