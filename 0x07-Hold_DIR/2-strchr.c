#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - locates first character in a string
 * @s: pointer to a memory area
 * @c: a character in the string s
 *
 * Description: returns a pointer to the first occurence of
 * the character c in the string s, or
 * NULL if the character is not found
 * Return: a pointer to the memory area s
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != c; i++)
	{
		return (NULL);
	}
	for (i = 0; s[i] == c; i++)
	{
		return (s);
	}
	return (s);

}
