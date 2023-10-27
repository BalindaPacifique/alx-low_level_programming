#include "main.h"

/**
 * get_endianness - prog checks the endianness
 *
 * Return: 0 if big endian,else 1 if little endian
 */
int get_endianness(void)
{
	int n;
	char *pointer;

	n = 1;
	pointer = (char *)&n;
	return (*pointer);
}
