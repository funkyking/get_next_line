/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panand <panand@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 01:08:02 by panand            #+#    #+#             */
/*   Updated: 2022/06/10 01:08:03 by panand           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	u1;
	unsigned char	u2;

	while (n-- > 0)
	{
		u1 = *(unsigned char *)s1++;
		u2 = *(unsigned char *)s2++;
		if (u1 != u2)
			return (u1 - u2);
		if (u1 == '\0')
			return (0);
	}
	return (0);
}
