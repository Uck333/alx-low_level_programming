#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_binary - prints the name of the program
 * @n: represents the size/number of arguments passed to the fuction
 *
 * Description: A program that prints its own name
 * Return: always zero
 */

void print_binary(unsigned long int n)
{
	int b = 0, a;
	int c[40];

	if ((n = 0) || (n = 1))
	{
		_putchar(n);
		printf ("n check is: %lu", n);
	}
	else
	{
		for (b = 0; ((n / 2) != 0) && ((n / 2) != 1); b++)
		{
			a = n % 2;
			c[b] = a;
			n = n / 2;
		}
	}
	while (b >= 0)
	{
		_putchar(c[b]);
		b--;
	}
}
