#ifndef dog_h
#define dog_h

/**
 * struct dog - a dog struct.
 * @name: a string that contains the dog's name.
 * @age: a float that holds the dog's age.
 * @owner: the name of the owner.
 *
 * description: is a struct of a dog's owner age and name.
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
void free_dog(dog_t *d);
#endif
