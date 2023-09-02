#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - prints a string in reverse
 * @s: char variable
 *
 * Return: nil
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	_strlen_recursion(s + 1);
	return (s[i] + 1);

}

