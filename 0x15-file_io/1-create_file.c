#include "main.h"

/**
 *create_file - creates a file.
 *@filename: name of file.
 *@text_content: pointer to content.
 *Return: returns 1 if succeed, -1 if not.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY, 384);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
		}
		wr = write(fd, text_content, i);
		if (wr == -1)
			return (-1);
	}
	else
	{
		wr = write(fd, '\0', 1);
		if (wr == -1)
			return (-1);
	}

	return (1);
}
