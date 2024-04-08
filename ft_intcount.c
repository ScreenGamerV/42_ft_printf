/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:29:49 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/25 18:39:47 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_intcount(unsigned int value)
{
	int	count;

	count = 0;
	while (value >= 10)
	{
		value /= 10;
		count++;
	}
	return (count + 1);
}
