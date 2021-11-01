#ifndef _DOG_
#define _DOG_
/**
 * struct dog - structed dog
 * @owner: Dog's owner
 * @name: Dog's name
 * @age: Age
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *owner;
	char *name;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
