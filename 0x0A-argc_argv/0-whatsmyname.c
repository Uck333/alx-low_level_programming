#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: represents the size/number of arguments passed to the fuction
 * @argv: points to the array of strings constituting the arguements
 *
 * Description: A program that prints its own name
 * Return: always zero
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
