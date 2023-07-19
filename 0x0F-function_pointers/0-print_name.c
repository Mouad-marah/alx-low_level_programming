#include "function_pointers.h"

/**
 * print_name - function declaration
 *
 * @name: pointer argument
 * @f: function pointer
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
