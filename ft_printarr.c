/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printarr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:31:32 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/25 18:32:04 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printarr(int size, char *arr)
{
	int	count;

	count = size - 1;
	while (count >= 0)
	{
		write (1, &arr[count], sizeof(char));
		count--;
	}
	return (size);
}
