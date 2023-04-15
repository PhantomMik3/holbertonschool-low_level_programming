#include "main.h"

/**
 * append_text_to_file - appends data to an existing file
 * @filename: name of the file
 * @text_content: text to append
 *
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filed = open(filename, O_WRONLY | O_APPEND);
	ssize_t length = 0;

	if (filename == NULL)
		return (-1);

	if (filed == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[length])
			length++;

		if (write(filed, text_content, length) != length)
		{
			close(filed);
			return (-1);
		}
	}
	close(filed);
	return (1);
}
