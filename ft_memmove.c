/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:13:19 by chughes           #+#    #+#             */
/*   Updated: 2022/03/28 17:13:20 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*destc;
	char	*srcc;
	char	*temp;

	i = 0;
	if (dest == NULL || src == NULL)
		return (NULL);
	temp = (char *)malloc(sizeof(char) * n);
	destc = (char *)dest;
	srcc = (char *)src;
	while (i < n)
	{
		temp[i] = srcc[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		destc[i] = temp[i];
		i++;
	}
	free(temp);
	return (dest);
}
