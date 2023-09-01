#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: char variable
 *
 * Return: nil
 */

void _puts_recursion(char *s)
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
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1);

}

