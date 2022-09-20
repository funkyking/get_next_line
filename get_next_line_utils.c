#include "get_next_line.h"

size_t  ft_strlen(char *str)
{
    size_t  i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char    *ft_strjoin(char *s1, char *s2)
{
    char    *str;
    size_t  i;
    size_t  j;

    if (!s1 && !s2)
        return (NULL);
    str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!str)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        str[i] = s2[j];
        i++;
        j++;
    }
    str [i] = '\0';
    return (str);
}

char    ft_strchr(char *str, int c)
{
    size_t  i;

    i = 0;
    if (!str)
        return (0);
    while (str[i] != '\0' && *str != c)
    {
        i++;
    }
    if (str[i] == (char) c)
    {
        return (str[i]);
        i++;
    }
    return 0;
}