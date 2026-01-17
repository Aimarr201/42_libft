/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 19:27:23 by amendibi          #+#    #+#             */
/*   Updated: 2026/01/17 19:27:23 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	unsigned char	*tmp_src;
	unsigned char	*tmp_dst;

	tmp_src = (unsigned char *) src;
	tmp_dst = (unsigned char *) dst;
	if (!dst || !src)
		return (NULL);
	if (tmp_dst >= tmp_src)
		while (size-- > 0)
			tmp_dst[size] = tmp_src[size];
	else
		ft_memcpy(dst, src, size);
	return (dst);
}
