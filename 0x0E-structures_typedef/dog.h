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
struct dog
{
	char *owner;
	char *name;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
