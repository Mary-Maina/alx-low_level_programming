#ifndef DOG_H
#define DOG_H
/**
 * struct dog- prints elements of a dog
 * @name: Name of the dog
 * @age: Age of dog
 * @owner: Owner of dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

/*Function Prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
