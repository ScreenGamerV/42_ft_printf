/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 20:00:53 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/01 20:07:16 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	count;

	count = 0;
	if (s)
	{
		while (s[count] != '\0')
		{
			write (fd, &s[count], sizeof(char));
			count++;
		}
		write (fd, "\n", sizeof(char));
	}
}
