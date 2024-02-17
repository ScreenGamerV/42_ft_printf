/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intconvert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 19:34:55 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/17 19:34:56 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char    *ft_intconvert(int  value)
{
    char    *res;

    res = ft_itoa(value);
    if (res == NULL)
    {
        free(res);
        return (NULL);
    }
    return (res);
}
