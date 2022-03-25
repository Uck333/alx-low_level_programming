#include "main.h"
/**
 * _strcat - to concatenate two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: always nil
 */
char *_strcat(char *dest, char *src)
{
	*dest[5] = "Hello ";
	*src[6] = "World!\n";
}
