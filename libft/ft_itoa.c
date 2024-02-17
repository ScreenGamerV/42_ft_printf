/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:45:57 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/01 19:16:32 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intcon(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 9)
	{
		n /= 10;
		count++;
	}
	return (count + 1);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*res;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = ft_intcon(n);
	res = malloc((count + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	res[count--] = '\0';
	while (count >= 0 && res[count] != '-' && n > 9)
	{
		res[count--] = (n % 10) + '0';
		n /= 10;
	}
	res[count] = n + '0';
	return (res);
}
