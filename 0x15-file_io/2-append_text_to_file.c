#include "main.h"

/**
 * ppend_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: If the function fails or filename is NULL - -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		fd = open(filename, O_WRONLY | O_APPEND);
		w = write(fd, text_content, len);

		if (fd == -1 || w == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
