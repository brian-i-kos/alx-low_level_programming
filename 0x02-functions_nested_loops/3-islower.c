#include "main.h"

/**
 * _islower - checks for lower case
 * @c: c is an asscii character
 *
 * Return: 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
