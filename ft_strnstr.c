/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:14:35 by chughes           #+#    #+#             */
/*   Updated: 2022/03/28 17:14:37 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	char	*hptr;
	char	*nptr;

	if (needle == NULL)
		return ((char *)haystack);
	nptr = (char *)needle;
	while (haystack && n > 0)
	{
		if (*haystack == *needle)
			break;
		n--;
		haystack++;
	}
	hptr = (char *)haystack;
	while (hptr++ && nptr++)
	{
		if (hptr != nptr)
			ft_strnstr(haystack, needle, n);
	}
	return (NULL);
}

// 