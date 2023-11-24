#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * binary_to_uint - prints the name of the program
 * @b: represents the size/number of arguments passed to the fuction
 *
 * Description: A program that prints its own name
 * Return: always zero
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, k, n = 0;

	while (b[i] != '\0')
	{
		i++;
	}
	for (k = 0; b[k] != '\0'; k++)
	{
		if ((b[k] != 0) && (b[k] != 1))
		{
			return (0);
		}
		else if ((b[k] == 0) || (b[k] == 1))
		{
			while ((i == 0) || (i > 0))
			{
				if (i == 0)
				{
					n = n + (b[k] * 1);
				}
				else if (i == 1)
				{
					n = n + (b[k] * 2);
				}
				else if (i == 2)
				{
					n = n + (b[k] * 4);
				}
				else if (i > 2)
				{
					n = n + (b[k] * 2);
				}
				i--;
			}
		}
	}
	return (n);
}
