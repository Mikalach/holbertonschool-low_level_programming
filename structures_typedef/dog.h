#ifndef HEADER_H
#define HEADER_H

/**
 * struct dog - create dog stucture with informations
 * init_dog - blablablablablalbalblabalbalblaalba
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

typedef struct dog_T
{
	char *name;
	float age;
	char *owner;
} dog_T;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
