#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - searches a string for any set of bytes
 * @haystack: pointer to a memory area
 * @needle: a constant byte
 *
 * Description: fills the first n bytes of memory area poited to
 * by s with the constant byte b
 * Return: a poiter to the memory area s
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	for (i = 0; (haystack[i] != '\0') && (needle[i] != '\0'); i++)
	{
		if (haystack[i] == needle[i])
		{
			return (needle);
		}
	}
	return (NULL);
}
