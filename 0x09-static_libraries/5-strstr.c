#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: a pointer with the string
 * @needle: a pointer with substring
 * Return: a pointer to the beginning of the located substring
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int j;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		j = 0;
		if (haystack[j] == needle[j])
		{
			do {
				if (needle[j + 1] == '\0')
				{
					return (haystack);
				}
				j++;
			} while (haystack[j] == needle[j]);
		}
		haystack++;
	}
	return ('\0');
}
