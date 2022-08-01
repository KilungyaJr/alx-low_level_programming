#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog'd profile
 * @name: first element
 * @age: second element
 * @owner: third element
 *
 * Description: about the dog, type and structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new name for the type struct dog
 */
typedef struct dog dog_t;

/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* #ifndef DOG_H */
