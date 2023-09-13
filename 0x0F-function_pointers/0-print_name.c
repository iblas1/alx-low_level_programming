#include "function_pointers.h"
#include <string.h>
#include <stdio.h>
/**
 * print_name - Short description
 * @name: param
 * @f: function pointer
 * Description: Longer description
 */


void print_name(char *name, void (*f)(char *))
{
	f(name);
}
