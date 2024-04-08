/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printargs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:41:23 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/28 17:21:52 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printargs(char index, va_list args)
{
	if (index == 'c')
		return (ft_printchar(va_arg(args, int)));
	if (index == '%')
		return (ft_printchar('%'));
	if (index == 'd' || index == 'i')
		return (ft_printint(va_arg(args, int)));
	if (index == 'p')
		return (ft_printpointer(index, va_arg(args, unsigned long long)));
	if (index == 's')
		return (ft_printstring(va_arg(args, char *)));
	if (index == 'u')
		return (ft_printint_unsigned(va_arg(args, unsigned int)));
	if (index == 'x' || index == 'X')
		return (ft_printhexadecimal(index, va_arg(args, unsigned int)));
	return (0);
}
