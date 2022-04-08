/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:13:09 by chughes           #+#    #+#             */
/*   Updated: 2022/03/28 17:13:10 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	str1 = (char *)dest;
	str2 = (char *)src;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dest);
}
