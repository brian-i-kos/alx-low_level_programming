#include <stdio.h>

/**
 * main - Entry point
 * print two combinatins of different digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i != j && i < j)
			{
				putchar(i + 48);
				putchar(j + 48);
				if (!((i == 8) && (j == 9)))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
