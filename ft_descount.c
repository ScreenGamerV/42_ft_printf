/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_descount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:29:02 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/25 18:39:22 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_descount(unsigned long long value)
{
	int	count;

	count = 0;
	while (value >= 16)
	{
		value /= 16;
		count++;
	}
	return (count + 1);
}
