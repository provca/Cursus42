/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: provira- <provira-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:09:05 by provira-          #+#    #+#             */
/*   Updated: 2023/09/18 09:11:20 by provira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buffer, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)buffer++ == (unsigned char)c)
			return ((void *)(unsigned char *)buffer -1);
	}
	return (NULL);
}
