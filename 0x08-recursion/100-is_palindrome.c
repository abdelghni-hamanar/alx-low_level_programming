#include "main.h"

int _strlen_recursion(char *s);
int check_palindrome(char *s, int i, int len);

/**
* is_palindrome - cjecks if a string is palidrome
* @s: variable string to reverse
* Return: 1 if palindrome, 0 if not
*/

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
* _strlen_recursion - a fucntion that return length of a string
* @s: pointer variable
* Return: Length of the string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
* check_palindrome - check string reversly if palindrome
* @s: string to check
* @i: iterator
* @len: length of the string
* Return: 1 if palindorm, 0 if not
*/

int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1, len - 1));
}
