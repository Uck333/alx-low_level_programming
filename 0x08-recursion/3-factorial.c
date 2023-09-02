#include <stdio.h>
#include "main.h"

/**
 * factorial - prints a string in reverse
 * @n: char variable
 *
 * Return: nil
 */

int factorial(int n)
{
	int a;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		a = n * factorial(n - 1);
		return (a);
	}

}

