#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int text, i = 0;

if (filename == NULL)
return (0);
fd = open(filename, O_APPEND | O_WRONLY);
if (fd == -1)
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
