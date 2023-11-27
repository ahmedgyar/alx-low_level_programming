#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file and fills it with text
 * @filename: name of the file to create
 * @text_content: text to fill the file with
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content) {
int fd;
ssize_t write_res;

if (filename == NULL)
return -1;

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
 return -1;

if (text_content != NULL) {
write_res = write(fd, text_content, strlen(text_content));
if (write_res == -1)
{
close(fd);
return -1;
}
}

close(fd);
return 1;
}
