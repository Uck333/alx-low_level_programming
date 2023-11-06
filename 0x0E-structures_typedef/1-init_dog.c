#include <stdlib.h>
#include <stdio.h>
#if !defined(PROJECT_MODULE_H)
#define PROJECT_MODULE_H
/**
 * struct dog - A struct to be defined
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Program defines struct with three member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
