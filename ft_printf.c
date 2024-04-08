/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:14:57 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/25 19:01:19 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		count;
	int		res;
	va_list	arg;

	count = 0;
	res = 0;
	va_start(arg, format);
	while (format[count] != '\0')
	{
		if (format[count] == '%' && format[count + 1] != '\0')
			res += ft_printargs(format[++count], arg);
		else
		{
			write (1, &format[count], sizeof(char));
			res++;
		}
		count++;
	}
	va_end(arg);
	return (res);
}
