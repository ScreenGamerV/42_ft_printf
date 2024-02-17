/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:12:23 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/01/27 20:25:04 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	count;

	count = ft_strlen(str);
	while (count >= 0)
	{
		if (str[count] == c)
			return ((char *)(str + count));
		count--;
	}
	return (0);
}
