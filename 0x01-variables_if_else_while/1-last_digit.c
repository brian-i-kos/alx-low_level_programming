#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main  - Entry pint of the program
 * number stored in the variable n
 * Return: Always 0 (Success)
 */

int main(void)
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("LAst digit of %d is %d ", n, n % 10);
