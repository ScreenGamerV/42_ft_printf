/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:56:21 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/01/30 16:57:12 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;
	size_t	start;
	size_t	end;
	char	*res;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup("s1"));
	count = 0;
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	res = (char *)malloc((end - start + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (start < end)
		res[count++] = s1[start++];
	res[count] = '\0';
	return (res);
}
