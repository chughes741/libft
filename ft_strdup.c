/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:13:42 by chughes           #+#    #+#             */
/*   Updated: 2022/03/28 17:13:44 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*outstr;
	size_t	n;
	size_t	i;

	i = 0;
	if (str1 == NULL)
		return (NULL);
	n = (strlen(str1) + 1) * sizeof(char);
	outstr = malloc(n);
	while (i < n)
	{
		outstr[i] = str1[i];
		i++;
	}
	outstr[i] = '\0';
	return (outstr);
}
