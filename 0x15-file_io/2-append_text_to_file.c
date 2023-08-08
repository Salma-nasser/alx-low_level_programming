#include "main.h"
/**
 * append_text_to_file - adds text to end of file
 * @filename: name of file
 * @text_content: content to be added
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fid, wr, len = 0;

	if (filename == NULL)
		return (-1);
	fid = open(filename, O_WRONLY | O_APPEND);
	if (fid == -1)
		return (-1);
	if (!text_content)
	{
		close(fid);
		return (1);
	}
	while (text_content[len])
		len++;
	wr = write(fid, text_content, len);
	if (wr == -1 || fid == -1)
	{
		close(fid);
		return (-1);
	}
	close(fid);
	return (1);
}
