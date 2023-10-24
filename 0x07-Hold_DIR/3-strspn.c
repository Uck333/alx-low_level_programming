#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to a memory area
 * @accept: a constant byte
 *
 * Description: gets the length of memory area of s filled by accept.
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (accept[i] != '\0')
		{
			i++;
		}
		s++;
	}
	return (i + 1);
}
