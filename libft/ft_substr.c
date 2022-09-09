/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panand <panand@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 20:43:22 by panand            #+#    #+#             */
/*   Updated: 2022/06/21 20:43:24 by panand           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*string;
	size_t			i;
	size_t			j;

	if (!s)
		return (NULL);
	if ((int)len > ft_strlen(s))
		len = ft_strlen(s);
	string = malloc(sizeof(*s) * (len + 1));
	if (!string)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			string[j] = s[i];
			j++;
		}
		i++;
	}
	string[j] = 0;
	return (string);
}
