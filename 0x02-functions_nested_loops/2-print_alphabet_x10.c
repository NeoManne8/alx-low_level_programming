#include "main.h"

/**
 * print_alphabet-x10 - prints alphabet in lowercase 10 times
 * Return: always 0 (success)
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
