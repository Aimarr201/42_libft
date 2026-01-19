/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 14:10:26 by amendibi          #+#    #+#             */
/*   Updated: 2026/01/19 17:34:56 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	tofind;

	tofind = (char) c;
	while (*s)
	{
		if (*s == tofind)
			return ((char *) s);
		s++;
	}
	if (tofind == '\0')
		return ((char *) s);
	return (NULL);
};
