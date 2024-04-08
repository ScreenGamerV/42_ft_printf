/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 19:34:55 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/25 19:04:00 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printint(int value)
{
	char	*res;
	int		count;

	count = 0;
	res = ft_itoa(value);
	if (res == NULL)
	{
		free(res);
		return (0);
	}
	while (res[count] != '\0')
	{
		write (1, &res[count], sizeof(char));
		count++;
	}
	free (res);
	return (count);
}
