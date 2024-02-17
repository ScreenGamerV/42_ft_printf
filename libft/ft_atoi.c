/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:01:04 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/02 19:44:54 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(const char *src)
{
	int	count;

	count = 0;
	while (src[count] == ' ' || src[count] == '\f' || src[count] == '\n'
		|| src[count] == '\r' || src[count] == '\t' || src[count] == '\v')
		count++;
	return (count);
}

int	ft_atoi(const char *str)
{
	int	count;
	int	minus;
	int	result;

	count = ft_check(str);
	minus = 1;
	result = 0;
	if (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			minus = -1;
		count++;
	}
	while (ft_isdigit(str[count]) == 1)
	{
		result = result * 10 + (str[count] - '0');
		count++;
	}
	return (result * minus);
}
