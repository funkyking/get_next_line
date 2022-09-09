/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panand <panand@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 01:00:38 by panand            #+#    #+#             */
/*   Updated: 2022/06/23 23:59:37 by panand           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total;
	unsigned char	*result;

	if (size == SIZE_MAX || count == SIZE_MAX)
		return (NULL);
	total = count * size;
	result = (unsigned char *)malloc(total);
	if (!result)
		return (NULL);
	ft_bzero(result, total);
	return (result);
}
