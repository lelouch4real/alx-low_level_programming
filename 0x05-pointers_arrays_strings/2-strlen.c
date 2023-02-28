#include "main.h"

/**
 * _strlen - gets character string
 * @s: character to getstring
 *
 * Return: returns length
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; ++s)
		++len;

	return (len);
}
