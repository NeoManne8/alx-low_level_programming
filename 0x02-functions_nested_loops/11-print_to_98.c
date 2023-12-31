#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all natural numbers from input 98
 * followed by a new line.
 * @n: the number to begin counting at.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
