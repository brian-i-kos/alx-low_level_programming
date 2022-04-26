#include <stdio.h>

/**
 * main - Entry point
 * prints alphabet in lower case except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		if (letters != 'e' && letters != 'q')
		{
			putchar(letters);
		}
		letters++;
	}
	putchar('\n');
	return (0);
}
