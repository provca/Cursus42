/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: provira- <provira-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:18:48 by provira-          #+#    #+#             */
/*   Updated: 2023/10/03 10:02:41 by provira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*memory;

	if (number && size && number > (UINT_MAX / size))
		return (NULL);
	memory = malloc(number * size);
	if (!memory)
		return (NULL);
	ft_bzero(memory, number * size);
	return (memory);
}
