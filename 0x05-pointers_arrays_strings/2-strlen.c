#include "main.h"
/**
 * _strlen - check the code
 * @s: -nil to declare
 *
 * Return: always nil
 */
int _strlen(char *s)
{
	int zone;

	zone = 0;
	while (*(s + zone) != '\0')
		zone++;
	return (zone);
}

