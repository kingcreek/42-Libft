/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurugar <imurugar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:00:04 by imurugar          #+#    #+#             */
/*   Updated: 2022/09/19 14:00:04 by imurugar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*target;
	t_list	*elem;

	target = NULL;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (!elem)
			ft_lstclear(&elem, del);
		else
			ft_lstadd_back(&target, elem);
		lst = lst->next;
	}
	return (target);
}
