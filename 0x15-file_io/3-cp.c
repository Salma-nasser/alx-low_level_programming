#include "main.h"
char *create_buf(const char *filename);
void close_f(int fid);
/**
 * create_buf - allocates 1024 bytes for a buffer
 * @filename: name of file
 * Return: a pointer to the buffer
 */
char *create_buf(const char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buff);
}
/**
 * close_f - closes a file
 * @fid: file discription
 * Return: nothing
 */
void close_f(int fid)
{
	int c;

	c = close(fid);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fid);
		exit(100);
	}
}
/**
 * main - copy from one file to another
 * @argc: number of arguments
 * @argv: an array of pointers
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int from, to, re, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buf(argv[2]);
	from = open(argv[1], O_RDONLY);
	re = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || re == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wr = write(to, buff, re);
		if (wr == -1 || to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		re = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (re > 0);
	free(buff);
	close_f(from);
	close_f(to);
	return (0);
}
