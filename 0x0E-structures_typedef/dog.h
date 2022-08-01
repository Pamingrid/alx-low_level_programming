#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines a new type struct dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Description: This is a structure which defines a new type of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *name);
void free_dog(dog_t *d);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
int _putchar(char c);
#endif
