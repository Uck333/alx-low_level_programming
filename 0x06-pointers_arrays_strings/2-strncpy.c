#include "main.h"
/**
 * _strncpy - to concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: variable
 *
 * Return: always nil
 */
char *_strncpy(char *dest, char *src, int n)
{
	int byteCount;

	for (byteCount = 0; byteCount < n && src[byteCount] != '\0'; byteCount++)
	dest[byteCount] = src[byteCount];
	for (; byteCount < n; byteCount++)
	dest[byteCount] = '\0';

	return (dest);
}
