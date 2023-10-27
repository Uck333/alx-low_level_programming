#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds arguments that are positive numbers
 * @argc: represents the size/number of arguments passed to the fuction
 * @argv: points to the array of strings constituting the arguements
 *
 * Description: adds only positive number arguments, else throws error
 * Return: always zero if success, else returns 1
 */

int main(int argc, char *argv[])
{
	int count;
	int b;

	if (argc <= 1)
	{
		printf("0\n");
	}
	for (count = 1; count < (argc - 1); count++)
		if ((atoi(argv[count])) > 0)
		{
			b = atoi(argv[count]) + atoi(argv[count + 1]);
			printf("%d\n", b);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	return (0);
}
