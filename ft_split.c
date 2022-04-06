/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:39:58 by chughes           #+#    #+#             */
/*   Updated: 2022/03/29 13:40:39 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**rtn;
	char	*newstr;
	int		i;
	int		j;

	rtn = ft_calloc(1, sizeof(char *));
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		newstr = ft_strtrim(s, &c);
		rtn[j] = newstr;
		j++;
		while (s[i] != c)
			i++;
	}
	return (rtn);
}
