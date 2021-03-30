#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
int fd;
int text, i = 0;
if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_WRONLY | )_TRUNC, 0600);
if (filename == -1)
return (-1);
if (text_content)
{
while (text_content[i])
i++;

text = write(fd, text_content, i);
if (text != i)
return (-1);
}
close(fd);
return (1);
}
