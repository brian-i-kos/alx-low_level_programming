#include <stdio.h>

/**
 * main - Entry point of the program
 * prints alphabet in lowe case then uppercase
 * Return: Always 0 (Success)
 */
 
int main(void)
{
	int letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		putchar(letters);
	for (letters = 'A'; letters <= 'z'; letters++)
		putchar(letters);
	putchar(letters);
	return (0);
}
