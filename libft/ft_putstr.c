#include "libft.h"

int ft_putstr(const char *str)
{
    int len;
    int ret;

    ret = ft_strlen(str);
    len = 0;
    if (!str)
    {
        ret += ft_putstr("(null)");
        len++;
    }
	write (1, str, ret);
	return (ret);
}
