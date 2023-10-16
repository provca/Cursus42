/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: provira- <provira-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:57:09 by provira-          #+#    #+#             */
/*   Updated: 2023/09/19 11:44:25 by provira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// TO DO: Line 21 --> Check *dest is bigger than n
size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (*(src + i))
		i++;
	if (!n)
		return (i);
	while (--n && *src)
		*dest++ = *src++;
	*dest = '\0';
	return (i);
}
