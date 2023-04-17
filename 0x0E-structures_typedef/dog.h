#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog into
 * @name: dog name
 * @age: dog age
 * @owner: owner dog name
 *
 * Description: best description
 */

struct dog
{

	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);





#endif
