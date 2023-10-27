#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: represents the size/number of arguments passed to the fuction
 * @argv: points to the array of strings constituting the arguements
 *
 * Description: Prints the number of arguments it has being given
 * Return: always zero
 */

int main(int argc, char *argv[])
{
	int count;
	int sum;
	(void)*argv;

	/**
	 * printf("%s\n", argv[0]);
	 *return (0);
	 */
	if (argc >= 0)
		for (count = 0; count < argc; count++)
	{
		sum = count;
	}
	printf("%d\n", sum);
	return (0);
}
