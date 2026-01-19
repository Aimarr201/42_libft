/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 18:52:37 by amendibi          #+#    #+#             */
/*   Updated: 2026/01/19 19:15:11 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	char	*dupe;
	size_t	i;

	i = 0;
	dupe = (char *) malloc(ft_strlen(s) + 1);
	if (!dupe)
		return (NULL);
	while (s[i])
	{
		dupe[i] = s[i];
		i++;
	}
	dupe[i] = '\0';
	return (dupe);
}
