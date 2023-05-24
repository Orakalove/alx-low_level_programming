#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @a: pointer to the printing function
 */
void print_name(char *name, void (*a)(char *))
{
	if (!name || !a)
		return;
	a(name);
}
