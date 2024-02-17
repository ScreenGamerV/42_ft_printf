/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkargs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:41:23 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/17 18:41:24 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void    *ft_checkargs(char  index, va_list args)
{
    // char
    if (index == 'c' || index == '%')
        return((void *)ft_intconvert(va_arg(args, int)));
    // decimal && integer
    if (index == 'd' || index == 'i')
        return((void *)ft_intconvert(va_arg(args, int)));
    //pointer
    if (index == 'p')
        return((void *)va_arg(args, void *));
    //string
    if (index == 's')
        return((void *)va_arg(args, char *));
    //unsigned decimal
    if (index == 'u')
        return((void *)ft_intconvert(va_arg(args, unsigned int)));
    //hexadecimal lowercase || uppercase
    if (index == 'x' || index == 'X') // need to fix
        return((void *)ft_intconvert(va_arg(args, unsigned int)));
    return (NULL);
}
