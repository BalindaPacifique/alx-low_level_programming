#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: a pointer with a string to be capitalized
 *
 * Return: pointer
 */
char *cap_string(char *str)
{
	int i = 0;

	while (!(str[i] >= 'a' && str[i] <= 'z'))
	{
		i++;
		if (str[i - 1] == ' ' ||
		str[i - 1] == '\t' ||
		str[i - 1] == '\n' ||
		str[i - 1] == ',' ||
		str[i - 1] == ';' ||
		str[i - 1] == '.' ||
		str[i - 1] == '!' ||
		str[i - 1] == '?' ||
		str[i - 1] == '"' ||
		str[i - 1] == '(' ||
		str[i - 1] == ')' ||
		str[i - 1] == '{' ||
		str[i - 1] == '}' ||
		str[i - 1] == 0)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
