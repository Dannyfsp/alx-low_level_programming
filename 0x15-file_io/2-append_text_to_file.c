#include "main.h"

/**
 * append_text_to_file - Entry point
 * function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL string to add at the end of a file
 * Return: on Success 1, if it fails -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, chars_append, str_len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[str_len])
			str_len++;
		chars_append = write(fd, text_content, str_len);
		if (chars_append != str_len)
			return (-1);
	}
	close(fd);
	return (1);
}
