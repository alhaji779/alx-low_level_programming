#include "main.h"
/**
 * create_file - creates a file
 * @filename: file
 * @text_content: content
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fn;
	int len = 0;
	long int result;

	if (filename == NULL)
		return (-1);
	fn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fn == -1)
		return (-1);
	if (text_content != NULL)
	{

		while (text_content[len])
			len++;
		result = write(fn, text_content, len);
		if (wrote == -1)
			return (-1);
	}
	if (close(fn) == -1)
		return (-1);
	return (1);
}
