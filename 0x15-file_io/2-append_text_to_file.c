#include "main.h"
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count = 0, wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if(text_content)
	{
		while (text_content[count])
			count++;
		wr = write(fd, text_content, count);
		if (wr == -1)
			return (-1);
	}

	close(fd);
	return (1);

}
