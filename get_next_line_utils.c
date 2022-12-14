#include "get_next_line.h"

size_t  ft_strlen(char *s)
{
    size_t  i;

    i = 0;
    if (!s)
        return (0);
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

char    *ft_strjoin(char *s1, char *s2)
{
    size_t  i;
    size_t  j;
    char    *s;

    if (!s1)
    {
        s1 = (char *)malloc(1 * sizeof(char));
        s1[0] = '\0';
    }
    if (!s1 || !s2)
        return (NULL);
    s = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (s == NULL)
        return (NULL);
    i = -1;
    j = 0;
	if (s1)
		while (s1[++i] != '\0')
        {
			s[i] = s1[i];
        }
	while (s2[j] != '\0')
		s[i++] = s2[j++];
	s[i] = '\0';
	free(s1);
	return (s);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}