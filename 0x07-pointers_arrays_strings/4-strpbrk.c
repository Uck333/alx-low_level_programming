#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: pointer to a memory area
 * @accept: a constant byte
 *
 * Description: fills the first n bytes of memory area poited to
 * by s with the constant byte b
 * Return: a poiter to the memory area s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	for (i = 0; (s[i] != '\0') && (accept[i] != '\0'); i++)
	{
		if (s[i] == accept[i])
		{
			return (accept);
		}
	}
	return (NULL);
}
