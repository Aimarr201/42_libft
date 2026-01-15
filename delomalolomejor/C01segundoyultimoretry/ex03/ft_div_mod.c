/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:30:31 by amendibi          #+#    #+#             */
/*   Updated: 2025/10/29 19:59:00 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>

int	main(void)
{
	int	valor1;
	int	valor2;
	int	valor3;
	int	valor4;

	valor1 = 5;
	valor2 = 2;
	valor3 = 0;
	valor4 = 0;
	ft_div_mod(valor1, valor2, &valor3, &valor4);
	printf("%d", valor3);
	printf("%d", valor4);
}*/
