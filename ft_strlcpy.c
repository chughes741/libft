/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:14:06 by chughes           #+#    #+#             */
/*   Updated: 2022/03/28 17:14:08 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	char	*dptr;
	char	*sptr;
	size_t	i;

	i = 0;
	dptr = (char *)dest;
	sptr = (char *)src;
	while (i++ < n)
	{
		dptr = sptr;
		dptr++;
		sptr++;
	}
	dptr[i + 1] = '\0';
	return (n);
}
