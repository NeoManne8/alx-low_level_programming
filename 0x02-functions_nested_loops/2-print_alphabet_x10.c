#include "main.h"

/**
 * print_alphabet-x10 - prints alphabet in lowercase 10x 
 * Return: Always 0 (Success)
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
