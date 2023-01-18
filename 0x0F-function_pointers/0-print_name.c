/**
 * print_name - print a name
 * @name: input name
 * @f: pointer to a function that returns nothing
 * Return: no value
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
