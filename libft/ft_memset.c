/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: provira- <provira-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:55:31 by provira-          #+#    #+#             */
/*   Updated: 2023/09/19 10:16:13 by provira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t count)
{
	void	*ptr_str;

	ptr_str = str;
	while (count--)
		*(unsigned char *)str++ = (unsigned char)c;
	return (ptr_str);
}
