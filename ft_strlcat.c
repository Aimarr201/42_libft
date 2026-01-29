/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:08:42 by amendibi          #+#    #+#             */
/*   Updated: 2026/01/29 18:05:48 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	sourcelen;
	size_t	destlen;
	size_t	i;

	sourcelen = ft_strlen(src);
	destlen = ft_strlen(dst);
	i = 0;
	if (dstsize == 0)
		return (sourcelen);
	if (dstsize <= destlen)
		return (sourcelen + dstsize);
	else
		sourcelen = destlen + sourcelen;
	while (src[i] && destlen < dstsize - 1)
	{
		dst[destlen] = src[i];
		destlen++;
		i++;
	}
	dst[destlen] = '\0';
	return (sourcelen);
}

/* int	main(void)
{
	char	dst[11] = "HOLA";
	char	*src = " MUNDO";
	int		dstsize = 11;
	printf("%ld", ft_strlcat(dst, src, dstsize));
} */