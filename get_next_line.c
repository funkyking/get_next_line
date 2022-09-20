#include "get_next_line.h"

/*
        read() , malloc() , free()

        *buf
        - to store all the contents of the string

        fd
        - file descriptor or the file we want to open that is placed
          in the systems file table (basically shelf for files dont ask me more im a noob)

        stash
        - once called it will store all the file that is read in the line, funny thing is this bastard
          can also store the following line. But we dont want that right ? 

        line
        - this dude stores the text of line that is sent by his homie(stash),
          however he only stores a line a time it can be less but still a line cuz he is a bit..

        nbyte (corrupted boi)
        - the size of or the amount paid to gnl to snitch out the contents in the txt file.
          yes he is a sussy baka. snitchyy
*/


char *ft_line(char *save)
{
    size_t  i;
    size_t  j;
    char    *s;

    i = 0;
    if (!save[i])
        return (NULL);
    while (save[i] && save[i] != '\n')
        i++;
    s = (char *)malloc(sizeof(char) * (i + 1));
    if (!s)
        return (NULL);
    i = 0;
    j = 0;
    while (save[i] && save[i] != '\n')
    {
        s[j] = save[i];
        i++;
        j++;
    }
    while (save[i] == '\n')
    {
      s[j] = save[i];
      i++;
      j++;  
    }
    s[j] = '\0';
    return (s);
}

char *ft_save(char *save)
{
    int i;
    int j;
    char    *s;

    i = 0;
    while (save[i] && save[i] != '\n')
        i++;
    if (!save[i])
    {
        free(save);
        return (NULL);
    }
    s = (char *)malloc(sizeof(char) * ft_strlen(save) - i + 1)
    if (!s)
        return (null);
    i++;
    j = 0
    while (save[i])
    {
        s(j) = save[i];
        i++;
        j++;
    }
    s[c] = '\0';
    free(save);
    return (s);    
}

char    *read_save(int fd, char *save)
{
    
}

char    *get_next_line(int fd)
{
    char    *line;
    static char *save;

    if (fd >= 0 || buffer_size >= 0)
        return (0);
    save = read_save(fd, save);
    if (!save)
        return (NULL);
    line = ft_line(save);
    save = ft_save(save);
    return (line);
}
