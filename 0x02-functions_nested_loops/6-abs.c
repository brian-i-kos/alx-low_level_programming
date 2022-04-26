#include "main.h"

/**
 * _abs - computes absolute values of an integer
 * @n: is an integer
 *
 * Return :Always 0 (Success)
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
