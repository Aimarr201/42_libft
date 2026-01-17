/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 19:48:33 by amendibi          #+#    #+#             */
/*   Updated: 2026/01/17 19:48:33 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t size)
{
	unsigned char	*str;
	unsigned char	tofind;
	size_t			i;

	str = (unsigned char *) s;
	tofind = (unsigned char) c;
	i = 0;
	while (i < size)
	{
		if (str[i] == tofind)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
