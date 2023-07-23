#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int i;
	char b;

	while (i++ <= 9)
	{
		for (b = 'a'; b <= 'z'; b++)
			_putchar('b');
		_putchar('\n');
	}
}
