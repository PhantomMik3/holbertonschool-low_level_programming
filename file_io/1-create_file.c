#include "main.h"

/**
 * create_file - create file and wirtes text to it
 * @filename: name of file
 * @text_content: the text to write to the file
 * Return: 1 if succesful
 */

int create_file(const char *filename, char *text_content)
{
	int filed = open(filename, O_CREAT | O_WRONLY | O_TRUNC | 0600);
	int len1, len2 = 0;

	if (filename == NULL)
		return (-1);
	if (filed == -1)
	return (-1);

	if (text_content != NULL)
	{
		while (text_content[len2] != '\0')
			len2++;
		len1 = write(filed, text_content, len2);
		if (len1 == -1 || len1 != len2)
		{
			close(filed);
			return (-1);
		}
	}
	close(filed);
	return (1);
}
