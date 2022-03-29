/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:21:05 by chughes           #+#    #+#             */
/*   Updated: 2022/03/29 14:21:07 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HEADER_FILE
# define HEADER_FILE

# include "libft.h"

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list *ft_lstnew(void *content);
int	ft_lstsize(t_list *lst);

# endif