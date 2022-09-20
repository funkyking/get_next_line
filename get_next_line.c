#include "get_next_line.h"

/*
        read() , malloc() , free()

        *buf
        - to store all the contents of the string

        fd
        - file descriptor or the file we want to open that is placed
          in the systems file table (basically shelf for files dont ask me more im a noob)

        buffer
        - it stores all the file that is read in the line, funny thing is this bastard
          can also store the following line (with read()). But we dont want that right ? 

        line
        - this dude stores the text of line that is sent by his homie(buffer),
          however he only stores a line a time it can be less but still a line cuz he is a bitc*

        buff_size(or fd as we declared) (corrupted boi)
        - the size of or the amount paid to gnl to snitch out the contents in the txt file.
          yes he is a sussy baka. snitchyy
*/


char    *ft_line(char *buffer) //reads the line only before \n and after \n (newline)
{
    int i;
    char    *s;

    i = 0
    if (!buffer[i])
        return (NULL);
    while (buffer[i] && buffer[i] != '\n')
    {
        i++;
    }
    s = (char *)malloc(sizeof(char) * (i + 2));
    if (!s)
        return (NULL);
    i = 0;
    while (buffer[i] && buffer[i] != '\n')
    {
        s[i] = buffer[i];
        i++;
    }
    if (buffer[i] && buffer[i] == '\n')
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
    {
        i++;
    }
    if (!buffer[i])
        free(buffer);
    /* length of text in file (-/minus) the previous line[i] and (+/add) 1 for ('\0') */
    s = (char *)malloc(sizeof(char) * ft_strlen(buffer) - i + 1);
    i++;
    if (!s)
        return (NULL);
    c = 0;
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

char    *read_file(int fd, char *buffer) //opens and reads the file using open()
{
    int read_bytes;
    char    *buff;

    buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!buff)
        return (NULL);
    read_bytes = 1;
    while (!ft_strchr(buffer, '\n') && read_bytes != 0)
    {
        read_bytes = read(fd, *buff, BUFFER_SIZE);
        if (read_bytes == -1)
        {
            free(buff);
            return (NULL);
        }
        buff[read_bytes] = '\0';
        buffer = ft_strjoin(buffer, buff)
    }
    free(buff);
    return (buffer);  
}

char    *get_next_line(int fd)
{
    char    *line;
    char    *buffer;

    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
        return (NULL);
    buffer = read_file(fd, buffer);
    if (!buffer)
        return (NULL);
    line = ft_line(buffer);
    buffer = ft_next(buffer);
    return (line);
}
