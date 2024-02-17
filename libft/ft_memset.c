/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:19:24 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/01/26 20:05:59 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*b, int c, size_t len)
{
	size_t			count;
	unsigned char	*cast;

	cast = (unsigned char *)b;
	count = 0;
	while (count < len)
	{
		cast[count] = (unsigned char)c;
		count++;
	}
	return (b);
}
