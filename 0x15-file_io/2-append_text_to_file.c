#include "main.h"

/**
 * append_text_to_file - appends text
 * @filename: filename
 * @text_content: content that is added
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_m;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	file_m = open(filename, O_WRONLY | O_APPEND);

	if (file_m == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(file_m, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(file_m);

	return (1);
}
