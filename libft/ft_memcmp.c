/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: provira- <provira-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:11:46 by provira-          #+#    #+#             */
/*   Updated: 2023/10/11 12:53:42 by provira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)buf1 != *(unsigned char *)buf2)
			return (*(unsigned char *)buf1 - *(unsigned char *)buf2);
		(unsigned char *)buf1++;
		(unsigned char *)buf2++;
	}
	return (0);
}
