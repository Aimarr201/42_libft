/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:31:18 by amendibi          #+#    #+#             */
/*   Updated: 2025/10/29 16:27:25 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*#include <stdio.h>

int	main(void)
{
	int	valor1;
	int	valor2;

	valor1 = 1;
	valor2 = 2;
	printf ("%d", valor1);
	printf ("%d", valor2);
	ft_swap(&valor1, &valor2);
	printf ("%d", valor1);
	printf ("%d", valor2);
	return (0);
}*/
