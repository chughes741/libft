/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:12:47 by chughes           #+#    #+#             */
/*   Updated: 2022/03/28 17:12:49 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*sptr;

	if (str == NULL)
		return (NULL);
	sptr = (void *)str;
	while(n)
	{
		if (*sptr == (char)c)
			return ((void *)sptr);
		sptr++;
		n--;
	}
	return (NULL);
}
