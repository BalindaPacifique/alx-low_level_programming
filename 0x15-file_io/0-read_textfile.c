#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX STDOUT
 * @filename: name of the file
 * @letters: numbers of letters
 *
 * Return: numbers of letters printed, else returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t numb, numbl;
	char *fptr;

	if (!filename)
	{
		return (0);
	}

	f = open(filename, O_RDONLY);

	if (f == -1)
	{
		return (0);
	}

	fptr = malloc(sizeof(char) * (letters));
	if (!fptr)
	{
		return (0);
	}

	numb = read(f, fptr, letters);
	numbl = write(STDOUT_FILENO, fptr, numb);

	close(f);

	free(fptr);

	return (numbl);
}
