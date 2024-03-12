/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beortiz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:09:16 by beortiz           #+#    #+#             */
/*   Updated: 2024/02/11 18:27:35 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

int	write_error(int x, int y)
{
	if (x < 0 || y < 0)
	{
		write(1, "ERROR: numeros negativos\n", 25);
		return (1);
	}
	else if (x == 0 || y == 0)
	{
		write(1, "ERROR: 0 introducido\n", 21);
		return (1);
	}
	return (0);
}

void	assign(int column, int row, int x, int y)
{
	if ((column == 1 && row == 1)
		|| (column == x && row == y && column != 1 && row != 1))
		ft_putchar('A');
	else if ((column == x && row == 1) || (column == 1 && row == y))
		ft_putchar('C');
	else if ((column == 1) || (column == x) || (row == 1) || (row == y))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	column;
	int	row;

	if (write_error(x, y) == 0)
	{
		row = 1;
		while (row <= y)
		{
			column = 1;
			while (column <= x)
			{
				assign(column, row, x, y);
				column++;
			}
			ft_putchar('\n');
			row++;
		}
	}
}
