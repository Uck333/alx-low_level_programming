#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * malloc_checked - makes an array of chars...
 * @b: An unsigned int variable
 *
 * Description: creates an array of chars, and initializes it to a char
 * Return: zero
 */

int *malloc_checked(unsigned int b)
{
	int *c;

	c = (int *)malloc(sizeof(b));

	if (c == NULL)
	{
		return (98);
	}
	else
	{
		return (c);
	}
	return (c);
}

