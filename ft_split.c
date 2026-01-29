/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:32:46 by amendibi          #+#    #+#             */
/*   Updated: 2026/01/29 16:49:20 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
			words++;
		i++;
	}
	return (words);
}

static int	ft_word_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	ft_free_all(char **s)
{
	size_t	count;

	count = 0;
	while (s[count] != NULL)
	{
		free(s[count]);
		count++;
	}
	free(s);
}

char	**ft_split(const char *s, char c)
{
	size_t	j;
	size_t	i;
	char	**list;

	if (!s)
		return (NULL);
	list = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!list)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		list[j] = malloc((ft_word_len(&s[i], c) + 1) * sizeof(char));
		if (!list[j])
			return (ft_free_all(list), NULL);
		ft_strlcpy(list[j++], &s[i], ft_word_len(&s[i], c) + 1);
		i = i + ft_word_len(&s[i], c);
	}
	list[j] = NULL;
	return (list);
}
