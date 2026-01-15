/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aunoguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 11:56:09 by aunoguei          #+#    #+#             */
/*   Updated: 2025/10/25 22:28:00 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char character);

void	ft_print_start_line(int columns)
{
	int	index;

	ft_putchar('/');
	index = 1;
	while (index < columns - 1)
	{
		ft_putchar('*');
		index++;
	}
	if (columns > 1)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	ft_print_last_line(int columns)
{
	int	index;

	ft_putchar('\\');
	index = columns - 1;
	while (index > 1)
	{
		ft_putchar('*');
		index--;
	}
	if (columns > 1)
	{
		ft_putchar('/');
	}
	ft_putchar('\n');
}

void	ft_print_body_line(int length)
{
	int	i;

	i = 0;
	while (i < length + 1)
	{
		if ((i == 0) || (i == length - 2))
		{
			ft_putchar('*');
		}
		if (i == length)
		{
			ft_putchar('\n');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
}

void	ft_rush(int columns, int lines)
{
	int	i;

	if (columns < 0)
	{
		(columns *= -1);
	}
	if (lines < 0)
	{
		(lines *= -1);
	}
	ft_print_start_line(columns);
	i = 1;
	while (i < lines - 1)
	{
		ft_print_body_line(columns);
		i++;
	}
	if (lines > 1)
	{
		ft_print_last_line(columns);
	}
}
