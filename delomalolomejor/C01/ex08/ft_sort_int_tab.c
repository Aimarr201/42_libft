/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:01:59 by amendibi          #+#    #+#             */
/*   Updated: 2025/11/05 19:21:08 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	loops;

	i = 0;
	size--;
	loops = size;
	while (loops > 0)
	{
		while (size > 0)
		{
			tmp = tab[i];
			if (tmp > tab[i + 1])
			{
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
			size--;
		}
		loops--;
		i = 0;
		size = loops;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int	size;
	int	array[5];

	size = 5;
	array[0] = 5;
	array[1] = 2;
	array[2] = 1;
	array[3] = 4;
	array[4] = 3;
	ft_sort_int_tab(array, size);
	printf("%d%d%d%d%d", array[0], array[1], array[2], array[3], array[4]);
}*/
