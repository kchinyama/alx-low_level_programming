#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - function reads a text file and prints to POSIX
 * @filename: is the file containing the text
 * @letters: the number of chars in the file
 * Return: 0 if file cannot be opened or read, or NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);
	return (w);
}