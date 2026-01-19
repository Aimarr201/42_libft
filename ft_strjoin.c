/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 22:29:41 by amendibi          #+#    #+#             */
/*   Updated: 2026/01/19 22:29:41 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*concatenated;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	concatenated = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!concatenated)
		return (NULL);
	while (s1[i])
	{
		concatenated[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		concatenated[i] = s2[j];
		j++;
		i++;
	}
	concatenated[i] = '\0';
	return (concatenated);
}
