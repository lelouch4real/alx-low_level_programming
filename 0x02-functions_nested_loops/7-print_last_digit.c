#include "main"

/**
 * print_last_digit _ entry point
 * @r: int input
 * Description: prints the last digit of number
 * Return: last digit of number r
 */

int print_last_digit(int r)
{
	int i;

	if (r < 0)
		i = -1 * (r % 10);
	else
		i = r % 10;
	_putchar((i % 10) + '0');
	return (i % 10);
}
