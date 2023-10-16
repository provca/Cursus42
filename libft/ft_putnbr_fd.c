/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: provira- <provira-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:55:59 by provira-          #+#    #+#             */
/*   Updated: 2023/10/13 10:53:08 by provira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnbr_base_fd(int nbr, const char *base, int fd)
{
	int				base_len;
	long long int	nb;
	char			c;

	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -((long long int)nbr);
	}
	else
		nb = (long long int)nbr;
	if (nb < base_len)
	{
		c = base[(size_t)nb % base_len];
		ft_putchar_fd(c, fd);
	}
	else
	{
		putnbr_base_fd(nb / base_len, base, fd);
		putnbr_base_fd(nb % base_len, base, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	const char		*base;
	long long int	l;

	base = "0123456789";
	l = (long long int)n;
	putnbr_base_fd(l, base, fd);
}
