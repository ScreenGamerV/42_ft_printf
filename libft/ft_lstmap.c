/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:45:41 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/02/05 19:16:18 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*current;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	res = NULL;
	current = lst;
	while (current != NULL)
	{
		new_node = ft_lstnew(f(current->content));
		if (!new_node)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, new_node);
		current = current->next;
	}
	return (res);
}
