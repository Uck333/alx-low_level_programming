#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: first integer variable
 * @y: second integer variable
 *
 * Description: Returns the value of x raised to the power of y
 * Return: Returns -1 if y is < 0.
 */

int _pow_recursion(int x, int y)
{
	int a = 1;

	if (y >= 0)
	{
		if (y == 0)
		{
			a = (a * (x / x));
		}
		else if (y == 1)
		{
			a = (a * (x * 1));
		}
		else if (y > 1)
		{
			a = (x * _pow_recursion(x, (y - 1)));
		}
		return (a);
	}
	else
	{
		return (-1);
	}
	return (a);
}

