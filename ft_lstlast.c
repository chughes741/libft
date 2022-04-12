/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:27:14 by chughes           #+#    #+#             */
/*   Updated: 2022/03/29 14:27:48 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*rtn;

	rtn = lst;
	while (rtn && rtn->next != NULL)
		rtn = rtn->next;
	return (rtn);
}
