#include "main.h"

/**
 * create_file - create and write
 * @filename: filename
 * @text_content: content
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_m;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	file_m = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_m == -1)
		return (-1);
	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(file_m, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(file_m);

	return (1);
}
