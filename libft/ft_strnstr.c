/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:28:27 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/02 17:49:35 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t			bcount;
	size_t			scount;
	char			*st1;
	char			*st2;

	st1 = (char *)big;
	st2 = (char *)little;
	bcount = 0;
	scount = 0;
	if (!*st2)
		return (st1);
	if (st1 == st2)
		return (st1);
	while (bcount < n && st1[bcount])
	{
		while (st2[scount] != 0 && st1[bcount + scount] == st2[scount])
			scount++;
		if (st2[scount] == '\0' && bcount + scount <= n)
			return (&st1[bcount]);
		else if (st1[bcount + scount] != st2[scount])
			scount = 0;
		bcount++;
	}
	return (NULL);
}
