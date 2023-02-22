#include "main.h"

/**
 * _islower - Entry point
 * @c: input char
 * Description: checks if char islowercase
 * Return: if true 1, else 0
 */

int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
