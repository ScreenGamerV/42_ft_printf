/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:35:41 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/01/26 20:04:18 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *b, size_t len)
{
	unsigned char	*cast;
	size_t			count;

	count = 0;
	cast = (unsigned char *)b;
	while (count < len)
	{
		cast[count] = 0;
		count++;
	}
	return (b);
}
