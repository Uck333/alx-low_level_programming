#include "main.h"
#include <stdio.h>

/**
 * _islower - to check for lowercase characters
 * @c:  variable representing lowercase characters
 *
 * Description: Program to check for lowercase
 * Return: One (1) if lowercase, 0 otherwise
 */

int _islower(int c)
{

	if (c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
