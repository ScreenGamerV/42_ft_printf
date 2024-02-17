/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:05:29 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/02 21:19:02 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	mem_dest;
	size_t	mem_src;
	size_t	mem_cpy;

	if (size == 0 && !dest)
		return (ft_strlen(src));
	count = 0;
	mem_src = ft_strlen(src);
	mem_dest = ft_strlen(dest);
	mem_cpy = size - mem_dest - 1;
	if (size <= mem_dest)
		return (size + mem_src);
	if (mem_src < mem_cpy)
		mem_cpy = mem_src;
	while (count < mem_cpy)
	{
		dest[mem_dest + count] = src[count];
		count++;
	}
	dest[mem_dest + mem_cpy] = '\0';
	return (mem_dest + mem_src);
}
