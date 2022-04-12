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
	int		i;
	size_t	wordcount;

	i = 1;
	wordcount = 0;
	if (s[0] != c && s[0] != '\0')
		wordcount = 1;
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c)
			wordcount++;
		i++;
	}
	return (wordcount);
}

char	**ft_split(char const *s, char c)
{
	char			**rtn;
	size_t			wordcount;
	unsigned int	start;
	size_t			end;

	wordcount = ft_wordcount(s, c);
	rtn = (char **)ft_calloc(wordcount + 1, sizeof(char *));
	if (rtn == NULL)
		return (NULL);
	rtn[wordcount] = (void *)0;
	start = (unsigned int)ft_strlen(s) - 1;
	wordcount -= 1;
	while (s[start] && start > 0)
	{
		while (s[start] && s[start] == c)
			start--;
		end = start + 1;
		while (s[start] && s[start] != c)
			start--;
		if (wordcount > 0)
		{
		rtn[wordcount] = ft_substr(s, start + 1, (end - start));
		wordcount--;
		}
	}
	return (rtn);
}

int main() {
	char *s1 = "      split       this for   me";
	char c = ' ';
	char **str = ft_split(s1, c);
	int i = 0;

	while (str[i]) {
		printf("%s\n", str[i]);
		i++;}
	return 0;
}
