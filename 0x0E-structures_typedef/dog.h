#ifndef DOG
#define DOG
/**
 * struct dog - creates a struct with dog info
 * @name: Dog's name
 * @age: age of the dog
 * @owner: Dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
