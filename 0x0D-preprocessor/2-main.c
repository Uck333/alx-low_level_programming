#include <stdio.h>
#include <stdlib.h>

/**
 * main - Starting point of the program
 * @void: takes no argument
 *
 * Description: Prints the name of the file it's compiled from
 * Return: Nil means success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

