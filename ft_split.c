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
	size_t	count;
	size_t	len;
	size_t	i;

	count = 0;
	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c)
			i++;
	}
	printf("Word count: %zu\n", count);
	return (count);
}

char	*ft_nextword(char const *s, char c)
{
	size_t	len;
	size_t	slen;
	char	*rtn;

	len = 0;
	slen = ft_strlen(s);
	while (s[len] != c && len < slen)
		len++;
	rtn = (char *)calloc(len + 1, sizeof(char));
	if (rtn == NULL)
		return (NULL);
	ft_strlcpy(rtn, s, len + 1);
	return (rtn);
}

char	**ft_split(char const *s, char c)
{
	char	**rtn;
	size_t	len;
	size_t	i;
	size_t	j;

	rtn = (char **)calloc(ft_wordcount(s, c) + 1, sizeof(char *));
	if (rtn == NULL)
		return (NULL);
	i = 0;
	j = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		while (s[i] == c)
			i++;
		rtn[j] = ft_nextword(&s[i], c);
		j++;
		while (s[i] != c)
			i++;
	}
	rtn[ft_wordcount(s, c) + 1] = (void *)0;
	return (rtn);
}

int main() {
	char *s1 = "     split     this for   me  !    ";
	char c = ' ';
	char **s2 = ft_split(s1, c);
	int i = 0;

	while (s2[i]) {
		printf("%s\n", s2[i]);
		i++;}
}
