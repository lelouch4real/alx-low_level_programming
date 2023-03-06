#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte,
 * main - entry
 * @s: the mwmory area to bi filled.
 * @b: the constant byte to be used for filling.
 * @n: the number of bytes to be filled.
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
