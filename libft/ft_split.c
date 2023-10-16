/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: provira- <provira-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:04:21 by provira-          #+#    #+#             */
/*   Updated: 2023/10/11 10:22:09 by provira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *str, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
		else if (str[i] == c)
			i++;
	}
	return (count);
}

static size_t	get_word_len(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static void	free_array(size_t i, char **array)
{
	while (i > 0)
	{
		i--;
		free(array[i]);
	}
	free(array);
}

static char	**split(const char *str, char c, char **array, size_t count_words)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < count_words)
	{
		while (str[j] && str[j] == c)
			j++;
		array[i] = ft_substr(str, j, get_word_len(&str[j], c));
		if (!array[i])
		{
			free_array(i, array);
			return (NULL);
		}
		while (str[j] && str[j] != c)
			j++;
		i++;
	}
	array[i] = NULL;
	return (array);
}

char	**ft_split(const char *str, char c)
{
	char	**array;
	size_t	words;

	if (!str)
		return (NULL);
	words = count_words(str, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	array = split(str, c, array, words);
	return (array);
}
