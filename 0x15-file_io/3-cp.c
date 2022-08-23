#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * function that copies the content of a file to another file
 * @argc: argument counter
 * @argv: argument vector
 * Return: on Success 0
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, chars_read, chars_write, file_close, file2_close;
	char *buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd1 = open(argv[1], O_RDONLY, 0);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]), exit(99);
	while ((chars_read = read(fd1, buf, 1024)) > 0)
	{
		chars_write = write(fd2, buf, chars_read);
		if (chars_write != chars_read)
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]), exit(99);
	}
	if (chars_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_close = close(fd1);
	if (file_close != 0)
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd1), exit(100);
	file2_close = close(fd2);
	if (file2_close != 0)
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd2), exit(100);
	return (0);
}
