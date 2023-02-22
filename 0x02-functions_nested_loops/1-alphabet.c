#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: Prints alphabets
 * Return: always return 0
 */

void print_alphabet(void)
{
	char i;

	i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
