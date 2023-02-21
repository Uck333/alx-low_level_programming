#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - entry point
 * @nil variables declared
 *
 * Description: A program to print _putchar
 * Return: zero (success)
 */

void print_alphabet_x10(void)
{
	char i;
	int j = '0';

	for (i = 'a'; i <= 'z'; i++)
		if (j <= 9)
		{
			_putchar(i);
			j++;
		}
	_putchar('\n');
}
