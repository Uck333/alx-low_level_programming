#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: char variable
 *
 * Return: nil
 */

void _print_rev_recursion(char *s)
{
	/**
	*if (*s != '\0')
	*{
	*	_putchar(*s);
	*	_puts_recursion(s + 1);
	*}
	*else
	*	_putchar('\n');
	*/
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);

}

