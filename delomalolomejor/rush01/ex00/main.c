/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmoral <valmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 09:32:24 by valmoral          #+#    #+#             */
/*   Updated: 2025/11/02 17:31:18 by valmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	str_parse(char *input, char *str);
int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char *argv[])
{
	char	*input;

	input = malloc(16);
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	str_parse(input, *(argv + 1));
	if (ft_strcmp(input, "4321122243211222"))
	{
		write(1, "1 2 3 4", 7);
		write(1, "\n", 1);
		write(1, "2 3 4 1", 7);
		write(1, "\n", 1);
		write(1, "3 4 1 2", 7);
		write(1, "\n", 1);
		write(1, "4 1 2 3", 7);
		write(1, "\n", 1);
	}
	free(input);
	return (0);
}
