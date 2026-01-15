/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 20:33:03 by amendibi          #+#    #+#             */
/*   Updated: 2025/10/29 21:25:39 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tem;

	tem = (*a % *b);
	*a = (*a / *b);
	*b = tem;
}

/*#include <stdio.h>

int	main(void)
{
	int	valor1;
	int	valor2;

	valor1 = 5;
	valor2 = 2;
	printf("%d", valor1);
	printf("\n%d", valor2);
	ft_ultimate_div_mod(&valor1, &valor2);
	printf("\n%d", valor1);
	printf("\n%d", valor2);
	return (0);
}*/
