#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
/**
 * append_text_to_file -function that appends text at the end of a file
 * @filename: archive filename
 * @text_content: string to write to the file
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int fd;

	int l;

	if (filename == NULL)
		return (0);
	fd = open(filename,  O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (0);
	}

	l = 0;
	while (text_content[l])
		l++;

	write(fd, text_content, l);



	close(fd);

	return (1);
	/*read*/



}


