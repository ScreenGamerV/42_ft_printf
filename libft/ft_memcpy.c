/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:45:42 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/01/27 13:22:40 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			count;
	unsigned char	*de;
	unsigned char	*sr;

	if (dest == NULL && src == NULL)
		return (NULL);
	de = (unsigned char *)dest;
	sr = (unsigned char *)src;
	count = 0;
	while (count < n)
	{
		de[count] = sr[count];
		count++;
	}
	return (dest);
}
