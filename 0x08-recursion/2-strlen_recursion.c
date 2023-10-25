#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - counts and returns the length of a string
 * @s: the string
 *
 * Description: Returns the length of a string
 * Return: String length
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	int j;

	if (s[i] != '\0')
	{
		j = (1 + _strlen_recursion(s + 1));
	}
	return (j);
}
