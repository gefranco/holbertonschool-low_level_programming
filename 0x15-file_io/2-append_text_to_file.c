#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
/**
 * append_text_to_file -function that appends text at the end of a file
 * @filename: archive filename
 * @text_content: string to write to the file
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int fd;


	int lw;

	if (filename == NULL)
		return (-1);
	fd = open(filename,  O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}


	if (text_content == NULL)
	{
		if (fd == 2)
			return (-1);
		else
			return (1);
	}


	lw = write(fd, text_content, strlen(text_content));

	if (lw < 0)
		return (-1);


	close(fd);

	return (1);
	/*read*/



}


