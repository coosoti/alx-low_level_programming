#include "dog.h"
#include <stdlib.h>


/**
 * new_dog - creates a new dog
 * @name: variable pointing to name of dog
 * @age: age of dog
 * @owner: variable pointing to dog owner
 *
 * Return: variable pointing to dog_t struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	unsigned int i, n, o;

	if (name == NULL || owner == NULL)
		return (NULL);
	n_dog = malloc(sizeof(dog_t));
	/* New dog's name */
	if (n_dog == NULL)
		return (NULL);
	for (n = 0; name[n]; n++)
		;
	n++;

	n_dog->name = malloc(n * sizeof(char));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		n_dog->name[i] = name[i];
	/* New dog age */
	n_dog->age = age;
	for (o = 0; owner[o]; o++)
		;
	o++;

	n_dog->owner = malloc(o * sizeof(char));

	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i < o; i++)
		n_dog->owner[i] = owner[i];
	return (n_dog);
}
