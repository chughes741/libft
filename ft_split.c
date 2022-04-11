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

size_t	ft_wordcount(char const *s, char c)
{
	size_t	rtn;
	int		j;

	rtn = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] == c && s[j] != '\0')
			j++;
		if (s[j] != '\0')
			rtn++;
		while (s[j] != c)
			j++;
	}
	return (rtn);
}

char	*ft_nextword(char const *s, char c)
{
	size_t	len;
	char	*rtn;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	rtn = (char *)calloc(len + 1, sizeof(char));
	if (rtn == NULL)
		return (NULL);
	strlcpy(rtn, s, len);
	return (rtn);
}

char	**ft_split(char const *s, char c)
{
	char	**rtn;
	int		i;
	int		j;

	rtn = (char **)calloc(ft_wordcount(s, c) + 1, sizeof(char *));
	if (rtn == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		rtn[j] = ft_nextword(&s[i], c);
		j++;
		while (s[i] != c)
			i++;
	}
	rtn[j] = (void *)0;
	return (rtn);
}
