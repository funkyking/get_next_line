/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panand <panand@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 01:11:23 by panand            #+#    #+#             */
/*   Updated: 2022/06/24 00:15:09 by panand           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t size)
{
	const unsigned char	*ptr;

	ptr = (const unsigned char *)s;
	while (size-- > 0)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)(ptr));
		ptr++;
	}
	return (0);
}
