/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:33:09 by amendibi          #+#    #+#             */
/*   Updated: 2025/10/26 14:07:13 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n > 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}

/*int	main(void)
{
	ft_is_negative(1);
	return (0);
}*/
