/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panand <panand@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 23:07:59 by panand            #+#    #+#             */
/*   Updated: 2022/06/23 23:08:06 by panand           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = 0;
	if (s != 0 && set != 0)
	{
		i = 0;
		while (s[i] && ft_strchr(set, s[i]))
			i++;
		j = ft_strlen(s);
		while (s[j - 1] && ft_strchr(set, s[j - 1]) && j > i)
			j--;
		str = (char *)malloc(sizeof(char) * (j - i + 1));
		if (str)
			ft_strlcpy(str, &s[i], (j - i + 1));
	}
	return (str);
}
