#include "main.h"
#include <fcntl.h>

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count = 0, wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC,  0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[count])
		count++;

	wr = write(fd, text_content, count);
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
