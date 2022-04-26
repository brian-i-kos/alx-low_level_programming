#include <stdio.h>

/**
 * main -Entry point
 * prints all the numbers of base 16
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char letters;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
