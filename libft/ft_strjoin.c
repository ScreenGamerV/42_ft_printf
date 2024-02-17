/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:46:55 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/01/27 17:51:28 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	con;
	char	*res;

	if (s1 == 0 || s2 == 0)
		return (0);
	con = 0;
	res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (res == NULL)
		return (NULL);
	while (s1[con] != '\0')
	{
		res[con] = s1[con];
		con++;
	}
	con = 0;
	while (s2[con] != '\0')
	{
		res[con + ft_strlen(s1)] = s2[con];
		con++;
	}
	res[con + ft_strlen(s1)] = '\0';
	return (res);
}
