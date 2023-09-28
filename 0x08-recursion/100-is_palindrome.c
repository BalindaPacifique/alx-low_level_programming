#include "main.h"
/**
 * strlen_recursion - give the length of a string
 *
 * @s: string
 * Return: length of a string
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + strlen_recursion(s + 1));
}

/**
 * compare_str - a function which compare characters of string
 * @s: string
 * @left: small iterator
 * @right: large iterator
 * Return: int
 */
int compare_str(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
		{
			return (1);
		}
		return (0 + compare_str(s, left + 1, right - 1));
	}
	return (0);
}
/**
 * is_palindrome - check if a string is a palidrome
 * @s: the string to test
 *
 * Return: 1 if a string is a palindrome, else 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (compare_str(s, 0, strlen_recursion(s) - 1));
}
