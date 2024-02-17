/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:24:57 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/02 16:40:34 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	mem;

	if (!size)
		return (ft_strlen(src));
	mem = 0;
	while (mem + 1 < size && src[mem])
	{
		dest[mem] = src[mem];
		mem++;
	}
	dest[mem] = '\0';
	return (ft_strlen(src));
}
