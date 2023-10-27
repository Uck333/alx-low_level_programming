#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments passed into it
 * @argc: represents the size/number of arguments passed to the fuction
 * @argv: points to the array of strings constituting the arguements
 *
 * Description: Prints the arguments it has being given
 * Return: always zero
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc >= 0)
		for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
