/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexadecimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:33:48 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/25 19:03:01 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	ft_checkhex(char index, char value)
{
	if (value < 10)
		return (value + '0');
	else
	{
		if (index == 'X')
			return (value + 'A' - 10);
		else if (index == 'x' || index == 'p')
			return (value + 'a' - 10);
	}
	return ('0');
}

int	ft_printhexadecimal(char index, unsigned long long value)
{
	char	*num;
	int		count;
	int		digits;

	digits = ft_descount(value);
	num = (char *)malloc((digits + 1) * sizeof(char));
	if (num == NULL)
		return (0);
	count = 0;
	while (digits > 0)
	{
		num[count] = ft_checkhex(index, value % 16);
		value /= 16;
		digits--;
		count++;
	}
	num[count] = '\0';
	count = ft_printarr(count, num);
	free(num);
	return (count);
}
