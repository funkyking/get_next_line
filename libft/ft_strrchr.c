/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panand <panand@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 20:40:47 by panand            #+#    #+#             */
/*   Updated: 2022/06/21 20:41:54 by panand           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int	i;

	i = ft_strlen(string);
	while (i >= 0)
	{
		if (string[i] == (char)c)
			return ((char *) &string[i]);
		i--;
	}
	return (NULL);
}
