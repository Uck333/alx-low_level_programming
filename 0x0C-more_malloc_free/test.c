#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * create_array - makes an array of chars...
 * @size: An unsigned int variable
 * @c: A char variable
 *
 * Description: creates an array of chars, and initializes it to a char
 * Return: zero
 */

/* char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int i;
	char *p;

	b = (char *)malloc(size * sizeof(char));

	if ((b == NULL) || (size == 0))
	{
		return (NULL);
	}
	else
		for (i = 0; i < size; i++)
		{
			p[0] = c[i];
		}
	free(b);
	return (p);
} */

int main(void)
{
	int i;
	int *a = (int *) malloc(10 * sizeof(int));

	for (i = 0; i < 10; i++)
	{
		a[i] = 10 - i;
		printf("a[%d] = %d\t\tIts size is: %lu\t\tAnd its address is: %p\t\tBut the real address of this element is: %p\n", i, a[i], sizeof(a[i]), (void *) &(a[i]), (void *) (a + i));
	}
	printf("\nThe address of the array itself is: %p\n", (void *) a);
	free(a);
return (0);
}

