#include <stdio.h>

/**
 * main - Entry point
 * prints combinations of 3 digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i != j && i < j && j < k)
				{
					putchar(j + 48);
					putchar(j + 48);
					putchar(k + 48);
					if (!((i == 7) && (j == 8) && (k == 9)))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}

	}
	putchar('\n');
	return (0);
}
