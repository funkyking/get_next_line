#include "get_next_line.h"

int *ft_strlen(char const *string)
{
	int	len;

	len = 0;
	while (string[len])
		len++;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char    *s;
	int i;
	int j;

	if (!s1 && !s2)
		return (NULL);
	s = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = 0;
	return (s);
}

char	*ft_strdup(const char *s1)
{
	int slen;
	char    *s2;

	slen = ft_strlen(s1);
	if (!s1)
		return (NULL);
	s2 = (char *)malloc(sizeof(char) * (slen + 1));
	if (!s2)
		return (NULL);
	slen = 0;
	while (s1[slen])
	{
		s2[slen] = s1[slen];
		slen++;
	}
	s2[slen] = '\0';
	return (s2);
}

void    free_str(char **str, char **str2, char **str3)
{
    if (str && *str)
    {
        free(*str);
        *str = NULL;
    }
    if (str2 && *str2)
    {
        free(*str2);
        *str2 = NULL;
    }
    if (str3 && *str3)
    {
        free(*str3);
        *str3 = NULL;
    }
}