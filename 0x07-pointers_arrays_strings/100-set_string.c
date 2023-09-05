#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * set_string - Allowances memory for a new strings and assigns it to a pointer
 * @s: A pointer to a pointer to cahr (string)
 * @to: A pointer to the source string to copy
 *
 * Description: this function allocates memory for a new new string,
 * copies of 'to' into the newly allocated memory
 */

void set_string(char **s, char *to)
{

	if (s != NULL)
	{
		*s = (char *)malloc(strlen(to) + 1);

		if (*s != NULL)
		{
			strcpy(*s, to);
		}
		else
		{
			fprintf(stderr, "Memory allocation failled\n");

			exit(1);
		}
	}
	else
	{
		fprintf(stderr, "Invalid pointer to poinrt\n");
		exit (1);
	}
}
