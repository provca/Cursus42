/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: provira- <provira-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:55:01 by provira-          #+#    #+#             */
/*   Updated: 2023/09/19 11:40:21 by provira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	void	*ptr_dest;

	ptr_dest = dest;
	if (!dest && !src)
		return (dest);
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (count--)
			((char *)dest)[count] = ((char *)src)[count];
	}
	else
	{
		while (count--)
			*(char *)dest++ = *(char *)src++;
	}
	return (ptr_dest);
}
