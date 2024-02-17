/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:58:09 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/06 17:48:06 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_words(char const *s, char c)
{
	size_t	size;
	size_t	count;
	int		flag;

	size = 0;
	count = 0;
	flag = 0;
	while (count <= ft_strlen(s))
	{
		flag = 0;
		while (s[count] == c)
			count++;
		while (s[count] != c && s[count])
		{
			if (!flag)
			{
				flag = 1;
				size++;
			}
			count++;
		}
		count++;
	}
	return (size);
}

static void	ft_putstr(char **res, const char *s, char c)
{
	size_t	count;
	size_t	len;
	size_t	res_con;

	count = 0;
	len = 0;
	res_con = 0;
	while (count < ft_strlen(s))
	{
		len = 0;
		while (s[count] == c)
			count++;
		while (s[count] != c && s[count])
		{
			count++;
			len++;
		}
		if (len > 0)
			res[res_con++] = ft_substr((char *)s, count - len, len);
		count++;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**res;

	if (!s)
		return (NULL);
	word_count = ft_words(s, c);
	if (!*s)
	{
		res = (char **)malloc(sizeof(char *));
		res[0] = NULL;
		return (res);
	}
	res = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	ft_putstr(res, s, c);
	res[word_count] = NULL;
	if (!res)
		return (NULL);
	return (res);
}
