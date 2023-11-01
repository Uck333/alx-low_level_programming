#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * create_array - makes an array of chars...
 * @size: An unsigned int variable
 * @c: A char variable
 *
 * Description: creates an array of chars, and initializes it to a char
 * Return: zero
 */

char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int i;

	b = (char *)malloc(size * sizeof(char));

	if ((b == NULL) || (size == 0))
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			b[i] = c;
		}
	}
	return (b);
}

