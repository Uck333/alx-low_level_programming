#include <stdio.h>
#include "main.h"

/**
 * factorial - prints the factorial of a particular number
 * @n: integer variable
 *
 * Description: Returns the factorial of a given number
 * Return: factorial of an unsigned integer, -1 otherwise.
 */

int factorial(int n)
{
	int a = 1;
	int j;
	int b;

	if (n >= 0)
	{
		if ((n == 0) || (n == 1))
		{
			a = (a * 1);
		}
		else if (n > 1)
		{
			j = (n * (n - 1));
			a = (j * factorial((n - 1) - 1));
		}
		return (a);
	}
	else
	{
		return (-1);
	}
	return (a * b);
}

