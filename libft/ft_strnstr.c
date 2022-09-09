/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panand <panand@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 19:07:08 by panand            #+#    #+#             */
/*   Updated: 2022/06/13 19:25:33 by panand           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t blen)
{
	size_t	llen;

	if (*little == '\0')
		return ((char *)big);
	llen = ft_strlen(little);
	while (*big && blen-- >= llen)
	{
		if (*big == *little && ft_strncmp(big, little, llen) == 0)
			return ((char *)big);
		big++;
	}
	return (0);
}
