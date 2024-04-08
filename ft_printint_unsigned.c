/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint_unsigned.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:36:01 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/28 17:24:57 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printint_unsigned(unsigned int value)
{
	int		count;
	char	*num;

	count = 0;
	num = (char *)malloc((ft_intcount(value) + 1) * sizeof(char));
	if (num == NULL)
		return (0);
	while (value >= 10)
	{
		num[count] = value % 10 + '0';
		value /= 10;
		count++;
	}
	num[count++] = value + '0';
	num[count] = '\0';
	count = ft_printarr(count, num);
	free(num);
	return (count);
}
