/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 08:09:16 by amendibi          #+#    #+#             */
/*   Updated: 2025/11/14 08:34:14 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	i;
	long	number;
	char	tmp[10];

	i = 0;
	number = nb;
	if (number == 0)
		write(1, "0", 1);
	if (number < 0)
	{
		number = number * -1;
		write(1, "-", 1);
	}
	while (number > 0)
	{
		tmp[i] = (number % 10) + '0';
		number = number / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &tmp[i], 1);
		i--;
	}
}
