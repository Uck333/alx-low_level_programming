#include "main.h"
/**
 * _strcmp - to concatenate two strings
 * @s1: estination string
 * @s2: source string
 *
 * Return: always nil
 */
int _strcmp(char *s1, char *s2)
{
	int counter, cmpVal;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	cmpVal = s1[counter] - s2[counter];
	return (cmpVal);
}
