#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads a textfile and prints it to stdout.
 *@filename: name of the file.
 *@letters: amount of chars
 *Return: no of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		free(buf);
		return (0);
	}

	wr = write(1, buf, rd);
	if (wr == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (wr);
}
