/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:42:50 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/02 21:24:51 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*point;

	if (nitems > 0 && size > SIZE_MAX / nitems)
		return (NULL);
	if (nitems * size > 2147483647)
		return (NULL);
	point = (void *)malloc(nitems * size);
	if (point == NULL)
		return (NULL);
	ft_bzero(point, nitems * size);
	return (point);
}
