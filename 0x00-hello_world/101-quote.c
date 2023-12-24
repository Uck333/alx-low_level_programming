/**
 * main - nothing to declare
 * @void - no argument
 *
 * Description: c program to use fprintf
 * Return: one if successful
 */
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, strlen(str));
	return (1);
}
