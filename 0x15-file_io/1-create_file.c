#include "main.h"
/**
 * create_file - function creates a new file
 * @filename: is the name of the file we want to create
 * @text_content: string we are writing into the new file created
 * Return: 1 for success and -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);
	close(fd);

	return (1);
}
