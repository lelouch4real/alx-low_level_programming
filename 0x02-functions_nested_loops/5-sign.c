#include "main.h"

/**
 * print_sign - Entry point
 * @n: int number
 * Description: checks number sign
 * Return: 1 if n > 0 else 0 if n ==0 otherwisw -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}

