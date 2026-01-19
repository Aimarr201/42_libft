/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 18:50:15 by amendibi          #+#    #+#             */
/*   Updated: 2026/01/19 17:34:45 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		((unsigned char *)ptr)[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
