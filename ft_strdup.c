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

	n = ft_strlen(str1);
	outstr = malloc(n);
	ft_memcpy(outstr, str1, n);
	return (outstr);
}
