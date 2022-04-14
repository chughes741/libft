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
	t_list	*head;

	if (lst == NULL || f == NULL || del == NULL)
		return (lst);
	head = ft_lstnew(f(ft_lstlast(lst)->content));
	while(lst)
	{
		ft_lstadd_front(&head, ft_lstnew(f(lst->content)));
		ft_lstdelone(ft_lstlast(lst), del);
	}
	return (head);
}
