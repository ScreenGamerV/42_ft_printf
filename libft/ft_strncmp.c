/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:17:47 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/02 18:27:58 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *st1, const char *st2, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n && (st1[count] || st2[count]))
	{
		if (st1[count] != st2[count])
			return ((unsigned char)st1[count] - (unsigned char)st2[count]);
		count++;
	}
	return (0);
}
