/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: provira- <provira-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:15:08 by provira-          #+#    #+#             */
/*   Updated: 2023/10/12 13:11:37 by provira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	j;

	if (!big && !n)
		return (NULL);
	if (!*little)
		return ((char *)big);
	while (*big && n--)
	{
		j = 0;
		while ((big[j] == little[j])
			&& little[j] && j <= n)
		{
			if (!little[j + 1])
				return ((char *)big);
			j++;
		}
		big++;
	}
	return (NULL);
}
