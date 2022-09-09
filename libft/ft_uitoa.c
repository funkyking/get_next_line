#include "libft.h"

int	ft_num_scope(unsigned int	n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_uitoa(unsigned int	n)
{
	char		*num;
	int			len;

	len = ft_num_scope(n);
	num = ft_calloc((len + 1), sizeof(char));
	if (!num)
        return (NULL);
	num[len] = '\0';
	while (len)
	{
		num[--len] = n % 10 + 48;
		n = n / 10;
	}
	return (num);
}
