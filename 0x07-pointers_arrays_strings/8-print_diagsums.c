#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: pointer to a memory area
 * @size: a constant byte
 *
 * Description: prints the sum of the two diagonals of 
 * a square matrix of integers. 
 * Return: a pointer to the memory area s.
 */

void print_diagsums(int *a, int size)
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
