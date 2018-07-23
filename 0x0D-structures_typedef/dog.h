#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - first struct
 * @name: char (name)
 * @age: float (age)
 * @owner: char (owner)
 * Description: create first struct of a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
