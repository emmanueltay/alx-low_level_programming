#include "main.h"


/**
 * _strlen_recursion - finds the length of a string
 * @s: the string
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}


/**
 * compare - compare each character of string
 * @s: the string
 * @x: the smaller iterator
 * @y: the bigger iterator
 * Return: 0 (Success)
 */

int compare(char *s, int x, int y)
{
	if (*(s + x) == *(s + y))
	{
		if (x == y || x == y + 1)
			return (1);
		return (0 + compare(s, x + 1, y - 1));
	}
	return (0);
}


/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 * Return: 1 if it is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _strlen_recursion(s) - 1));
}
