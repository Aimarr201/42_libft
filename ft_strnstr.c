/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 18:32:28 by amendibi          #+#    #+#             */
/*   Updated: 2026/01/19 17:35:12 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *) big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *) little);
		}
		i++;
	}
	return (NULL);
}

/*#include <stddef.h>
#include <stdio.h>

int	main(void)
{
	char s1[] = "ola h la hhohola";
	char s2[] = "hola";
	printf("%s", ft_strnstr(s1, s2, 15));
}*/