#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: void
 */

void rev_string(char *s)
{
	int x, i, j;
	char temp;

	for (x = 0; s[x] != '\0'; ++x)
		;

	for (i = 0, j = x - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
