/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:32:55 by chughes           #+#    #+#             */
/*   Updated: 2022/03/29 14:34:30 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;

	newlist = ft_lstnew((*f)(lst->content));
	while(lst)
	{
		lst = lst->next;
		ft_lstadd_back(&newlist, ft_lstnew((*f)(lst->content)));
	} // TODO for lstnew it may need a separate copy of contents
	return (newlist);
} // TODO implement del
