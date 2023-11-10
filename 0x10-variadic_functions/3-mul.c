#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies its arguments
 * @argc: represents the size/number of arguments passed to the fuction
 * @argv: points to the array of strings constituting the arguements
 *
 * Description: multiplies only two the arguments, else throws error
 * Return: always zero if success, else returns 1
 */

int main(int argc, char *argv[])
{
	int count;
	int count_1;
	int count_2;
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		for (count = 0; count < argc; count++)
		{
			count_1 = atoi(argv[1]);
			count_2 = atoi(argv[2]);
			sum = count_1 * count_2;
		}
	printf("%d\n", sum);
	return (0);
}
