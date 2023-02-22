#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Description: prints alphabetx10
 * Return: always return 0
 */
void print_alphabet_x10(void)
{
	char i;
	char h;

	for (h = 0; h <= 9; h++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putvhar(i);
		}
		_putchar('\n');
	}
}
