/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:32:46 by amendibi          #+#    #+#             */
/*   Updated: 2026/01/22 17:22:32 by amendibi         ###   ########.fr       */
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
		if (s[i] != c && s[i + 1] != '\0')
			words++;
		i++;
	}
}

static int	ft_word_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && (s[i + 1] != c || s[i + 1] != '\0'))
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

	if (!s)
		return (NULL)
	words = ft_count_words(s, c);
	list = (char**)malloc(sizeof(char *) * (words + 1));
	i = 0;
	while ()

	list[words] = '\0'
}
