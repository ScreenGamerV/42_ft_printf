/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:45:13 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/01/27 13:48:05 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			count;
	unsigned char	*st1;
	unsigned char	*st2;

	count = 0;
	st1 = (unsigned char *)str1;
	st2 = (unsigned char *)str2;
	while (count < n)
	{
		if (st1[count] != st2[count])
			return (st1[count] - st2[count]);
		count++;
	}
	return (0);
}
