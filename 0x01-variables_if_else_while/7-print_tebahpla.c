#include <stdio.h>

/**
 * main - Entry point
 * prints alphabets in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'z'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
