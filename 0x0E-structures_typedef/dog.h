#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct - dog
 * @name: 1st args
 * @age: 2nd args
 * @owner: 3rd args
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d); */

#endif
