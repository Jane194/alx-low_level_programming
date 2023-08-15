#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints the struct dog declared for dog d
 *
 * @d: the new dog d of type struct
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!((*d) .name))
			printf("name: (nil)\n");
		else
			printf("name: %s\n", d->name);
		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("owner: (nil)\n");
		else
			printf("owner: %s\n", (*d) .owner);
	}
}
