/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 13:31:41 by amendibi          #+#    #+#             */
/*   Updated: 2025/11/09 10:54:36 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		get_vars_from_cmd(int argc, char **argv, char **dic_ptr, char **nptr);
void	number_to_text(char *dictionary_file, char *number_string);

int	main(int argc, char **argv)
{
	char	*dictionary_file;
	char	*number_string;

	dictionary_file = "numbers.dict";
	if (get_vars_from_cmd(argc, argv, &dictionary_file, &number_string))
		return (-1);
	number_to_text(dictionary_file, number_string);
	return (0);
}

int	get_vars_from_cmd(int argc, char **argv, char **dic_ptr, char **nptr)
{
	if (argc > 3 || argc < 2)
	{
		write(2, "Error: wrong number of parameters\n", 34);
		return (-1);
	}
	if (argc == 3)
	{
		*dic_ptr = *(argv + 1);
		*nptr = *(argv + 2);
	}
	if (argc == 2)
	{
		*nptr = *(argv + 1);
	}
	return (0);
}

void	number_to_text(char *dictionary_file, char *number_string)
{
	long	numbers_dict[41];
	char	words_dict[41][11];
	int		largest_ten_power;
	long	number;
	int		index;

	ft_import_dictionary(dictionary_file, numbers_dict, words_dict);
	str_to_number(number_string, &number, &largest_ten_power);
	index = largest_ten_power;
	while (index >= 1)
	{
		print_word_from_dict(numbers_dict, words_dict, number, index);
		index--;
	}
	return ;
}

void	str_to_number(char number_string[], long *number, int *largest_unit)
{
	long	divisor;
	int		index;

	*largest_unit = 0;
	while (number_string[*largest_unit])
		(*largest_unit)++;
	(*largest_unit)--;
	index = *largest_unit;
	divisor = 1;
	*number = 0;
	while (index >= 0)
	{
		*number += divisor * (number_string[index] - '0');
		divisor *= 10;
		index--;
	}
	return ;
}
