#include "get_next_line.h"

int	find_newline(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int	*ft_strlen(char const *string)
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
	int	i;
	char    *s2;

	i = ft_strlen(s1);
	if (!s1)
		return (NULL);
	s2 = (char *)malloc(sizeof(char) * (i + 1));
	if (!s2)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	*ft_strchr(const char *s, int c)
{
	if ((unsigned char)c == 0)
		return ((char *)(s + ft_strlen(s)));
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

void	*malloc_clean(unsigned int count, unsigned int size)
{
	void	*ret;
	unsigned char	*ptr;
	unsigned int	sum;
	int	i;
	int	j;

	sum = count * size;
	ret = malloc(sum)
	if (!ret)
		return (NULL);
	ptr = (unsigned char *)ret;
	i = 0;
	while (sum[j] != 0)
	{
		ptr[i] = '\0';
		i++;
		j--;
	}
	return (ret);
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