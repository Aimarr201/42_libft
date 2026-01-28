/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:32:46 by amendibi          #+#    #+#             */
/*   Updated: 2026/01/28 18:52:44 by amendibi         ###   ########.fr       */
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
		if (s[i] == c && (s[i + 1] != '\0' || s[i + 1] != c))
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

static void	ft_free_all(char **s, size_t i)
{
	size_t	count;

	count = 0;
	while (count < i)
	{
		free(s[count]);
		count++;
	}
	free(s);
}

char	**ft_split(const char *s, char c)
{
	size_t	words;
	size_t	i;
	char	**list;
	int		len;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	list = (char **)malloc(sizeof(char *) * (words + 1));
	if (!list)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = ft_word_len(s, c);
		list[i] = ft_substr(s, 0, len);
		if (!list[i])
			return (ft_free_all(list, i), NULL);
		s = s + len;
		i++;
	}
	list[i] = '\0';
	return (list);
}
