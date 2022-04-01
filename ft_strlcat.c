/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:13:56 by chughes           #+#    #+#             */
/*   Updated: 2022/03/28 17:13:57 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	char	*dstp;
	char	*srcp;

	dstp = (char *)dst;
	srcp = (char *)src;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	dstp += dstlen;
	ft_memcpy(dstp, srcp, srclen);
	return ((srclen * sizeof(char)) + size);
}
