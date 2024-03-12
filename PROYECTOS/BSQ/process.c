/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 00:08:48 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/27 00:08:54 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./BSQ.h"

static void	process_empty(t_data *d, unsigned short **matrix,
	unsigned int x, unsigned int y)
{
	unsigned short	tmp;

	if (x == 0 || y == 0)
		matrix[y][x] = 1;
	else
	{
		if (matrix[y - 1][x] > matrix[y][x - 1])
			tmp = matrix[y][x - 1];
		else
			tmp = matrix[y - 1][x];
		if (tmp > matrix[y - 1][x - 1])
			matrix[y][x] = matrix[y - 1][x - 1] + 1;
		else
			matrix[y][x] = tmp + 1;
		if (matrix[y][x] > matrix[d->bsq_y][d->bsq_x])
		{
			d->bsq_y = y;
			d->bsq_x = x;
		}
	}
}

static int	process_end_check(t_data *d,
	unsigned int *x, unsigned int *y, unsigned int i)
{
	if (d->map[i] == '\n')
	{
		if (x[0] != d->len_lines)
			return (ft_pser(
					"Error: map error\t(all lines should be the same length)\n"));
		x[0] = -1;
		y[0] += 1;
	}
	else
		return (ft_pser(
				"Error: map error\t(all lines should be the same length)\n"));
	return (1);
}

int	process(t_data *d, unsigned short **matrix)
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	i;

	i = d->n;
	x = 0;
	y = 0;
	while (i < (d->len_lines + 1) * d->nbr_lines)
	{
		if (y >= d->nbr_lines)
			return (ft_pser(
					"Error: map error\t(lines over number of lines in arg)\n"));
		else if (d->map[i] == d->empty)
			process_empty(d, matrix, x, y);
		else if (d->map[i] == d->obstacle)
			matrix[y][x] = 0;
		else if (!process_end_check(d, &x, &y, i))
			return (0);
		i++;
		x++;
	}
	return (1);
}
