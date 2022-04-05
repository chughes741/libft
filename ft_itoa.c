/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:40:49 by chughes           #+#    #+#             */
/*   Updated: 2022/03/29 13:41:37 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isize (int n)
{
	if (n == -2147483648)
		return (10);
	if (n < 0)
		n *= -1;
	if (n < 10)
		return (1);
	if (n < 100)
		return (2);
	if (n < 1000)
		return (3);
	if (n < 10000)
		return (4);
	if (n < 100000)
		return (5);
	if (n < 1000000)
		return (6);
	if (n < 10000000)
		return (7);
	if (n < 100000000)
		return (8);
	if (n < 1000000000)
		return (9);
	return (10);
}

char	*ft_itoa(int n)
{
	char	*rtn;
	int		len;

	len = ft_isize(n) + 1;
	if (n < 0)
		len++;
	rtn = malloc(len * sizeof(char));
	if (n < 0)
		rtn[0] = '-';
	while (n > 9 || n < -9)
	{
		rtn[len - 2] = (n % 10) + '0';
		len--;
		n /= 10;
	}
	rtn[len - 2] = n + '0';
	return (rtn);
}
