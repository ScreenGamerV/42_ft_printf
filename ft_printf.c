/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:14:57 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/17 17:14:59 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *format, ...)
{
    int     count;
    int     params;
    void    *container;
    va_list arg;

    params = ft_paramcount(format);
    count = 0;
    container = NULL;
    va_start(arg, format);
    while (!format[count])
    {
        if (format[count] == '%')
        {
            container = ft_checkargs(format[++count], arg);
            if (container != NULL)
                write (1, &container, sizeof(container));
        }
        else
            write (1, &format[count], sizeof(char));
        count++;
    }
    return (0);
}