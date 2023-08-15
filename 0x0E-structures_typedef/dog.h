#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure containing a dog's information
 * @name: First member of the struct dog
 * @age: Second member of the struct dog
 * @owner: Third member of the struct dog
 *
 * Description: This is a new type struct dog
 *  that contains name, age and owner as the elements
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
