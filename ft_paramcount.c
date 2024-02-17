/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_paramcount.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:37:14 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/17 17:37:15 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_paramcount(const char *str)
{
    int count;
    int res;

    count = 0;
    res = 0;
    while (str[count] != 0)
    {
        if (str[count] == '%')
            res++;
        count++;
    }
    return (res);
}
