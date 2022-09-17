#include "get_next_line.h"

/*
    -Reads the words or elements in a file
    -But it reads only the line before in enters \n (next line)
    -it reads and stops at the end of the line
    -it starts again after discovering a newline
*/
char    *before_newline(const char *s)
{
    int i;
    char    *ret;
    

    while (s[i] != '\0' && s[i] != '\n')
        i++;
    if (s[i] != '\0' && s[i] == '\n')
        i++;
    ret = malloc_clean(i + 1, sizeof * ret);
    if (!ret)
        return (NULL);
    i = 0;
    while (s[i] != '\0' && s[i] != '\n')
    {
        ret[i] = s[i];
        i++;
    }
    if (s[i] == '\n')
    {
        ret[i] = s[i];
        i++;
    }
    return (ret);
}

char    *after_newline(const char *s)
{
    char    *ret;
    int i;
    int j;

    j = 0;
    while(s && s[j])
        j++;
    i = 0;
    while (s[i] != '\0' && s[i] != '\n')
        i++;
    if (s[i] != '\0' && s[i] == '\n')
        i++;
    ret = malloc_clean((j - i) + 1, sizeof * ret);
    if (!ret)
        return (NULL);
    while (s[i + j])
    {
        ret[j] = s[i+j];
        j++;
    }
    return (ret);
}

void	read_line(int fd, char **save, char **tmp)
{
    char    *buf;
    int r;

    buf = malloc(sizeof * buf * (BUFFER_SIZE + 1));
    if (!buf)
        return (0);
    r = 1;
    while (r > 0)
    {
        r = read(fd, buf, BUFFER_SIZE);
        if (r == -1)
        {
            free_str(&buf, save, tmp);
        }
        buf [r] = '\0';
        *tmp = ft_strdup(save);
        free_str(save, 0, 0);
        *save = ft_strjoin(*tmp, buf);
        free(tmp, 0, 0);
        if (find_newline(*save))
            break ;
    }
}

char    *inspect_line(char **save, char **tmp)
{
    char   *text;

    *tmp = ft_strdup(save);
    free_str(save, 0, 0);
    *save = after_newline(tmp);
    text = before_newline(tmp);
    free_str(tmp, 0, 0);
    return (text);
}

char    *get_next_line(int fd)
{
    static char *save;
    char    *tmp;
    char    *text;

    if (0 > fd || 0 >= BUFFER_SIZE)
        return (NULL);
    save = NULL;
    tmp = NULL;
    text = NULL;
    read_line(fd, &save, &tmp);
    while (save != NULL && save != '\0')
    {
        text = inspect_line(&save, &tmp);
    }
    if (!text || *text == '\0')
    {
        free_str(&save, &tmp, &text);
        return (NULL)
    }
    return (text);
}
