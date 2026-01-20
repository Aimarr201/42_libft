/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 19:16:03 by amendibi          #+#    #+#             */
/*   Updated: 2026/01/20 19:57:56 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	tmp_dst = (unsigned char *) dst;
	tmp_src = (unsigned char *) src;
	if (!dst || !src)
		return (NULL);
	if (size == 0)
		return (dst);
	while (size > 0)
	{
		*(tmp_dst++) = *(tmp_src++);
		size--;
	}
	return (dst);
}
