/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panand <panand@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 23:10:13 by panand            #+#    #+#             */
/*   Updated: 2022/06/15 23:10:15 by panand           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *string)
{
	int	sum;
	int	sign;
	int	found;

	sum = 0;
	sign = 1;
	found = 1;
	while (*string == ' ' || *string == '\t' || *string == '\n' || *string == '\f' || *string == '\r')
		string++;
	if (*string == '-')
		sign = -1;
	if (*string == '-' || *string == '+')
		string++;
	while (*string && found)
	{
		if (*string >= '0' && *string <= '9')
			sum = sum * 10 + *string - '0';
		else
			found = 0;
		string++;
	}
	return (sign * sum);
}