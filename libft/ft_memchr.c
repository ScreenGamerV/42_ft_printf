/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:31:24 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/01/27 13:39:16 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			count;
	unsigned char	*cast;

	cast = (unsigned char *)str;
	count = 0;
	while (count < n)
	{
		if (cast[count] == (unsigned char)c)
			return (&cast[count]);
		count++;
	}
	return (NULL);
}
