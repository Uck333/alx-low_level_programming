#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - checks if inputed integer is a prime number.
 * @n: integer variable.
 *
 * Description: Returns 1 if input is integer and 0 otherwise.
 * Return: 1 means success.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n > 1)
	{
		if (((n % 2) == 0) || ((n % 3) == 0) || ((n % 5) == 0) || ((n % 7) == 0))
		{
			return (0);
		}
		else
		{
			return (1);
		}
		return (0);
	}
	return (0);
}
