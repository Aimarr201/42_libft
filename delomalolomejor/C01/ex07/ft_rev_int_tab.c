/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 21:15:41 by amendibi          #+#    #+#             */
/*   Updated: 2025/11/05 17:50:04 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	size--;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
		size--;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int	tab[3];
	int	size;

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	size = 3;
	ft_rev_int_tab(tab, size);
	printf("%d%d%d", tab[0], tab[1], tab[2]);
	return (0);
}*/
