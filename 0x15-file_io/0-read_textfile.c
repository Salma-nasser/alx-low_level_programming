#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reades a specific file
 * @filename: the name of the file const string
 * @letters: number of letters to be read and print
 * Return: actual num of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t filed;
	char *buffer;
	ssize_t writen;
	ssize_t r;

	filed = open(filename, O_RDONLY);
	if (filed == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(filed, buffer, letters);
	writen = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	close(filed);
	return (writen);
}
