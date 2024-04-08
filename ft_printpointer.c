/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:36:46 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/25 18:37:03 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpointer(char index, unsigned long long value)
{
	int	count;

	count = 2;
	write (1, "0x", sizeof(char) * 2);
	count += ft_printhexadecimal(index, value);
	return (count);
}
