#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer variable.
 *
 * Description: Returns the natural square root of a number.
 * Return: Returns -1 if number has no natural square root.
 */

int _sqrt_recursion(int n)
{
	int i = 2;

	if (n < 2)
	{
		if (n < 0)
		{
			return (-1);
		}
		else
			return (n);
	}
	if (n >= 2)
	{
		if (n == (i * i))
		{
			return (i);
		}
		else if ((n / 2) < i)
		{
			return (-1);
		}
		else if ((n / 2) > i)
		{
			/* i = (i + 1); */
			i = i + _sqrt_recursion(n / 2);
		}
		return (i);
	}
	return (i);
}
