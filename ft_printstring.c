/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:05:48 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/25 19:06:42 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstring(char *value)
{
	int	count;

	count = 0;
	if (value == NULL)
	{
		write (1, "(null)", sizeof(char) * 6);
		return (6);
	}
	while (value[count] != '\0')
	{
		write (1, &value[count], sizeof(char));
		count++;
	}
	return (ft_strlen(value));
}
