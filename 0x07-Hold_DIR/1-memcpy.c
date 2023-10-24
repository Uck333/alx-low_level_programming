#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - fills memory with a constant byte
 * @dest: pointer to a memory area
 * @src: a constant byte
 * @n: unsigned int representing number of bytes to be filled
 *
 * Description: fills the first n bytes of memory area poited to
 * by s with the constant byte b
 * Return: a poiter to the memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
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
		dest[i] = *src;

		printf("0x%02x", dest[i]);
		i++;
	}
	printf("\n");
	return (dest);
}
