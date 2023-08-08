#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: text to be written inside file
 * Return: 1 on sucess
 * -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fid, wr, len = 0;

	if (filename == NULL)
		return (-1);
	while (text_content[len] != '\0')
		len++;
	if (text_content == NULL)
		len = 0;
	fid = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	wr = write(fid, text_content, len);
	if (wr == -1 || fid == -1)
		return (-1);
	close(fid);
	return (1);
}
