#include "get_next_line.h"
/*
        read() >>>> [ssize_t read(int fd, void *buf, size_t count);]
        - read() attempts to read up to count bytes from file descriptor fd 
          into the buffer starting at buf.

        malloc() >>>> [void *malloc(size_t size);]
        - This function returns a pointer to the allocated memory, or NULL if the request fails.

        free() >>>> [void free(void *ptr);]
        - It deallocates the memory previously allocated by a call to calloc, malloc, or realloc.

        fd
        - file descriptor or the file we want to open 
          that is placed in the systems file table (basically shelf for files dont ask me more im a noob)

        buffer
        - A temporary storage that allocates into the memory heap or something idk.

        line
        - a temporary pointer, this dude stores the text of line that is sent by his homie(buffer),
          however he only stores a line a time it can be less but still a line cuz he is a bitc*

*/


char    *ft_line(char *buffer) //reads the line only before \n and after \n (newline)
{
    int i;
    char    *s;

    i = 0;
    if (!buffer[i])
        return (NULL);
    while (buffer[i] && buffer[i] != '\n')
        i++;
    s = (char *)malloc(sizeof(char) * (i + 2));
    if (!s)
        return (NULL);
    i = 0;
    while (buffer[i] && buffer[i] != '\n')
    {
        s[i] = buffer[i];
        i++;
    }
    if (buffer[i] == '\n')
    {
        s[i] = buffer[i];
        i++;
    }
    s[i] = '\0';
    return (s);
}

char    *ft_next(char *buffer) /* goes on to next line whilst ignoring first line */
{
    int i;
    int j;
    char    *s;

    i = 0;
    while (buffer[i] && buffer[i] != '\n')
        i++;
    if (!buffer[i])
    {
        free(buffer);
        return (NULL);
    }
    /* length of text in file (-/minus) the previous line[i] and (+/add) 1 for ('\0') */
    s = (char *)malloc(sizeof(char) * ft_strlen(buffer) - i + 1);
    if (!s)
        return (NULL);
    i++;
    j = 0;
    while (buffer[i])
    {
        s[j] = buffer[i];
        j++;
        i++;
    }
    s[j] = '\0';
    free(buffer);
    return (s);
}

char    *file_read(int fd, char *buffer) //opens and reads the file using open()
{
    char    *stash;
    int read_bytes;

    stash = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!stash)
        return (NULL);
    read_bytes = 1;
    while (!ft_strchr(buffer, '\n') && read_bytes != 0)
    {
        read_bytes = read(fd, stash, BUFFER_SIZE);
        if (read_bytes == -1)
        {
            free(stash);
            return (NULL);
        }
        stash[read_bytes] = '\0';
        buffer = ft_strjoin(buffer, stash);
    }
    free(stash);
    return (buffer);  
}

char    *get_next_line(int fd)
{
    char    *line;
    static char *buffer;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    buffer = file_read(fd, buffer);
    if (!buffer)
        return (NULL);
    line = ft_line(buffer);
    buffer = ft_next(buffer);
    return (line);
}
