#include <stdlib.h>
#include <time.h>
#include <stdi0.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 *
 */
int main(void)

{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar("\n");
	return (0);
}
