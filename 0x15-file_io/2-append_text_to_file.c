#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int numbl;
	int numb;

	if (!filename)
	{
		return (-1);
	}

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		for (numbl = 0; text_content[numbl]; numbl++)
			;

		numb = write(f, text_content, numbl);

		if (numb == -1)
		{
			return (-1);
		}
	}

	close(f);

	return (1);
}
