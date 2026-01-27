/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 15:27:42 by amendibi          #+#    #+#             */
/*   Updated: 2026/01/27 17:22:45 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	tofind;
	char	*p;

	tofind = (char)c;
	p = NULL;
	while (*s)
	{
		if (*s == tofind)
			p = (char *) s;
		s++;
	}
	if (tofind == '\0')
		p = (char *)s;
	return (p);
}
