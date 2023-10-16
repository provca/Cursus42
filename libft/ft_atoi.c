/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: provira- <provira-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:27:20 by provira-          #+#    #+#             */
/*   Updated: 2023/10/11 12:06:24 by provira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_space(int c)
{
	if ((c > 8 && c < 14) || (c == 32))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long long int	n;
	int				sign;

	n = 0;
	sign = 1;
	while (*str && check_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		n = (n * 10) + (sign * (*str - '0'));
		if (n < INT_MIN || n > INT_MAX)
			return (0);
		str++;
	}
	return (n);
}
