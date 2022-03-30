/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:08:51 by chughes           #+#    #+#             */
/*   Updated: 2022/03/28 17:09:07 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_neg(const char *str)
{
	int	sign;
	int	index;

	sign = 0;
	index = 0;
	while (str[index] != '\0' && (str[index] < '0' || str[index] > '9'))
	{
		if (str[index] == '-')
			sign++;
		index++;
	}
	sign %= 2;
	return (sign);
}

int	ft_pow10(int pow)
{
	int	result;

	if (pow <= 0)
		result = 1;
	else if (pow == 1)
		result = 10;
	else
		result = 10 * ft_pow10(pow - 1);
	return (result);
}

int	is_space(char n)
{
	if (n == ' ' || n == '\n' || n == '\t' || n == '\v' || n == '\f' \
		|| n == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	output;
	int	i;
	int	len;

	i = 0;
	len = 0;
	output = 0;
	while (str[len] != '\0' && is_space(str[len]) == 1)
		len++;
	while (str[len] != '\0' && (str[len] == '-' || str[len] == '+'))
		len++;
	while (str[len] != '\0' && (str[len] >= '0' && str[len] <= '9'))
		len++;
	while (len >= 0)
	{
		if (str[len] >= '0' && str[len] <= '9')
			output += (str[len] - 48) * ft_pow10(i - 1);
		len--;
		i++;
	}
	if (is_neg(str) == 1)
		output *= -1;
	return (output);
}
