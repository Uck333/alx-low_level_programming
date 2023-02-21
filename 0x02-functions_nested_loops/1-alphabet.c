#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - entry point
 * @nil variables declared
 *
 * Description: A program to print _putchar
 * Return: zero (success)
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
