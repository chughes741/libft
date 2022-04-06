/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:52:14 by chughes           #+#    #+#             */
/*   Updated: 2022/03/29 13:52:17 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*rtn;
	unsigned int	start;
	size_t			len;
	void			*temp;

	start = 0;
	len = ft_strlen(s1) - 1;
	temp = ft_strchr(set, (int)s1[start]);
	while (temp != NULL && start <= len)
	{
		start++;
		temp = ft_strchr(set, (int)s1[start]);
	}
	temp = ft_strchr(set, (int)s1[len]);
	while (temp != NULL && len >= start)
	{
		len--;
		temp = ft_strchr(set, (int)s1[len]);
	}
	rtn = ft_substr(s1, start, (len - start + 1));
	return (rtn);
}
