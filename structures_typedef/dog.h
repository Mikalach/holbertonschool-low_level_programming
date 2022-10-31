#ifndef HEADER_H
#define HEADER_H
/**
 * struct dog - create dog stucture with informations
 * @name: dog name
 * @age: dog age
 * @owner: Third member
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
