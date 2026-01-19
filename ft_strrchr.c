/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 15:27:42 by amendibi          #+#    #+#             */
/*   Updated: 2026/01/19 17:35:14 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char	tofind;
	char	*p;

	tofind = (char) c;
	while (*p)
	{
		p++;
	}
	while (p >= s)
	{
		if (*p == tofind)
			return ((char *) p);
		p--;
	}
	return (NULL);
}
