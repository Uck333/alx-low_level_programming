#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to a memory area
 * @b: a constant byte
 * @n: unsigned int representing number of bytes to be filled
 *
 * Description: fills the first n bytes of memory area poited to
 * by s with the constant byte b
 * Return: a poiter to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		s[i] = b;

		printf("0x%02x", s[i]);
		i++;
	}
	printf("\n");
	return (s);
}
