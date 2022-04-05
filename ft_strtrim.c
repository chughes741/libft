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

int	ft_setmatch(char const *c, char const *set)
{
	int	i;

	i = 0;
	if (c == NULL || set == NULL)
		return (0);
	while (set[i])
	{
		if (set[i] == *c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*rtn;
	unsigned int	start;
	size_t			len;

	start = 0;
	len = ft_strlen(s1);
	while (ft_setmatch(&s1[start], set) == 1)
		start++;
	while (ft_setmatch(&s1[len - 1], set) == 1)
		len--;
	rtn = ft_substr(s1, start, (len - start));
	return (rtn);
}
