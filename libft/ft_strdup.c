/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 19:21:33 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/01/27 14:19:54 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	size_t	count;

	count = 0;
	while (s[count])
		count++;
	res = (char *)malloc(sizeof(char) * (count + 1));
	if (res == NULL)
		return (NULL);
	count = 0;
	while (s[count] != '\0')
	{
		res[count] = s[count];
		count++;
	}
	res[count] = '\0';
	return (res);
}
