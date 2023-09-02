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
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
	length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
	dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
