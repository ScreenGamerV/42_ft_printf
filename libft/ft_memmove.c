/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 20:w24/01/24 19:05:36 by vtoroyan          #+#    #+#		      */
/*   Updated: 2024/01/24 20:47:34 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	unsigned char	*de;
	unsigned char	*sr;

	if (dest == NULL && src == NULL)
		return (NULL);
	de = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (de < sr)
		ft_memcpy(dest, src, n);
	else
	{
		while (n > 0)
		{
			*(de + n - 1) = *(sr + n - 1);
			n--;
		}
	}
	return (de);
}
