#include"main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string parameter input
 *
 * Return: void
*/

void puts_half(char *str)
{
	int x, n;

	for (x = 0; str[x] != '\0'; ++x)
		;

	if (x % 2 == 0)
	{
		for (n = x / 2; str[n] != '\0'; ++n)
			_putchar(str[n]);
	} else
	{
		for (n = ((x - 1) / 2) + 1; str[n] != '\0'; ++n)
			_putchar(str[n]);
	}
	_putchar('\n');
}

