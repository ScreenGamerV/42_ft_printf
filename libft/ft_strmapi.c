/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:16:50 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/01 19:32:58 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*res;
	unsigned int		count;

	if (!f || !s)
		return (ft_strdup(""));
	count = 0;
	res = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (s[count] != '\0')
	{
		res[count] = f(count, s[count]);
		count++;
	}
	res[count] = '\0';
	return (res);
}
