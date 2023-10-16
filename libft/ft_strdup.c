/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: provira- <provira-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:33:49 by provira-          #+#    #+#             */
/*   Updated: 2023/09/21 09:57:19 by provira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*create_str(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_strdup(const char *str)
{
	char	*dest;
	char	*start;

	dest = create_str(ft_strlen(str));
	if (!dest)
		return (NULL);
	start = dest;
	while (*str)
		*dest++ = *str++;
	*dest = '\0';
	return (start);
}
