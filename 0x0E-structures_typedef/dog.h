#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure with dog details
 * @name: name of dog
 * @owner: dog owner
 * @age: age of dog
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *strcopy(char *dest, char *src);
int strlength(char *s);
void free_dog(dog_t *d);

#endif
