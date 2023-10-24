#include <stdio.h>
#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome.
 * @s: the string to be examined.
 *
 * Description: Returns 1 if string is a palindrome, and 0 otherwise.
 * An empty string is considered a palindrome
 * Return: Returns 1 if successful.
 */

int is_palindrome(char *s)
{
	int i = 0;
	int j = 0;

	while ( s[i] != '\0')
	{
		i = i + 1;
	}
	while (*s)
	{
		if (s[j] == s[i])
		{
			i = i - 1;
			j = j + 1;
		}
		else
		{
			return (0);
		}
		return (1);
	}
	return (1);
}
