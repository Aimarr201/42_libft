/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmoral <valmoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 09:32:28 by valmoral          #+#    #+#             */
/*   Updated: 2025/11/02 19:07:43 by valmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_parse(char *input, char *source)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (source[i])
	{
		if (source[i] > '0' && source[i] < '5')
		{
			input[index] = source[i];
			index++;
		}
		i++;
	}
	if (index != 16)
	{
		write(1, "Error\n", 6);
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

/*
here we TRIED to organize the input into 4 arrays 
int	ft_arrays(int *input, int top[], int down[], int left[], right[])
{
	int i;
	int top[4];
	int down[4];
	int left[4];
	int right[4];

	i = 0;
	while (input[i] != input[8])
	{
		top[0] = input[i];
		down[0] = input[i + 8];
		left[0] = input[i + 16];
		right[0] = input[i + 24];
		i++;
			if (i != " ")
			{
			write(1, "Error\n", 5);
			return(1);
			}
		else 
		i++;
	}
}

here we planned to use the arrays to validate 
if the input format is correct or not,
and print error message (it did not work :/)
int	ft_arrays(int *input);

int ft_paralel(int size, int *input)
{
	int i;

	i = 0;
	while (input[i])
	{
		int	ft_arrays(int *input);
		if ()
	}
}

int	ft_input_val(int size, int *input)
{
	int	i;

	i = 0;
	if (size != 16)
	{
		write(1, "Error\n", 5);
		return(1);
	}
	else if (size != 16)
	{
		while (input[i])
		{
			if  (input[i] < 1 || input[i] > 4)
				write(1, "Error\n", 5);
				return(1);
			i++;	
		}
	}	
}
value position in the array 
"col1up(0) col2up(2) col3up(4) col4up(6 )
col1down(8)  col2down(10) col3down(12) col4down(14) 
row1left(16) row2left(18) row3left(20) row4left(22) 
row1right(24) row2right(26) row3right(28) row4right(30)"

another attempt to sort the array
int	ft_pretty_input(int input)
{
	int	i;
	int ipretty;
	int	pretty_input;
	
	i = 0;
	ipretty = 0;
	while (ipretty[i] != ipretty["16"])
	{
		if (input["i"] != " ")
			pretty_input["ipretty"] = input["i"];
		else
		i++;
			if (i != " ")
			{
			write(1, "Error\n", 5);
			return(1);
			}
		else 
		i++;
	}
}
*/