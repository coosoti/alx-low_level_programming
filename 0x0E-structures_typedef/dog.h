#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - defines a new type struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: name of dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */
