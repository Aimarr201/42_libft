/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 21:57:34 by amendibi          #+#    #+#             */
/*   Updated: 2026/01/19 21:57:34 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(long num)
{
	size_t	len;

	len = 0;
	if (num == 0)
	{
		len++;
		return (len);
	}
	if (num < 0)
	{
		num = num * -1;
		len++;
	}
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*strtoint;
	size_t	len;
	long	num;

	num = n;
	len = ft_numlen(num);
	strtoint = (char *)malloc(sizeof(char) * len + 1);
	if (!strtoint)
		return (NULL);
	strtoint[len--] = '\0';
	if (n == 0)
		strtoint[0] = '0';
	if (num < 0)
	{
		strtoint[0] = '-';
		num = num * -1;
	}
	while (num > 0)
	{
		strtoint[len] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (strtoint);
}
