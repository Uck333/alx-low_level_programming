#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum change to give for an amount of money
 * @argc: represents the size/number of arguments passed to the fuction
 * @argv: points to the array of strings constituting the arguements
 *
 * Description: prints change only if arguments is 1, else throws error
 * Return: always zero if success, else returns 1
 */

int main(int argc, char *argv[])
{
	int count;
	int count_1;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		for (count = 1; count < argc; count++)
		{
			count_1 = atoi(argv[count]);
			if (count_1 < 0)
				printf("0\n");
			else
				if ((count_1 > 10) && (count_1 < 100))
					printf("5\n");
				else
					if (count_1 >= 100)
						printf("25\n");
		}

	return (0);
}
