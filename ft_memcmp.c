/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 19:57:44 by amendibi          #+#    #+#             */
/*   Updated: 2026/01/19 17:34:38 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	size_t				i;
	unsigned const char	*str1;
	unsigned const char	*str2;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (i < size)
	{
		if (*str1 != *str2)
			return ((int)(*str1 - *str2));
		str1++;
		str2++;
		i++;
	}
	return (0);
}
