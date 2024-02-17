/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:50:35 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/01/30 18:36:35 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	char	*sub;
	size_t	mem;		

	if (!s)
		return (NULL);
	count = 0;
	mem = ft_strlen(s + start);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len < mem)
		mem = len;
	sub = (char *)malloc((mem + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	while (count < mem)
	{
		sub[count] = s[count + start];
		count++;
	}
	sub[count] = '\0';
	return (sub);
}
