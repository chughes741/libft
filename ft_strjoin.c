/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:51:26 by chughes           #+#    #+#             */
/*   Updated: 2022/03/29 13:51:29 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rtn;
	int		i;

	i = 0;
	rtn = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	while (s1)
	{
		rtn[i] = *s1;
		s1++;
		i++;
	}
	while (s2)
	{
		rtn[i] = *s2;
		s2++;
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}
