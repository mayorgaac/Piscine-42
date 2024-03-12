/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 00:02:10 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/27 00:02:16 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./BSQ.h"

int	ft_clear(t_data *d, unsigned short **matrix, int ret)
{
	if (d->map)
		free(d->map);
	if (matrix)
		free_matrix(matrix, d);
	return (ret);
}

int	solve(t_data *d, char *file)
{
	unsigned short	**matrix;

	init_data(d);
	if (file)
	{
        if (!read_file(d, file))
            return (ft_clear(d, NULL, 0));
		/*if (!read_stdin(d))
			return (ft_clear(d, NULL, 0));*/
	}
	else
	{
		return (ft_pser("Error: File doesn´t exist\n"));
	}
	matrix = init_matrix(d);
	if (!matrix)
        return (ft_clear(d, NULL, 0));
	if (!process(d, matrix))
		return (ft_clear(d, matrix, 0));
	if (PRINT == 0)
		display_bsq(d, matrix);
	return (ft_clear(d, matrix, 1));
}

int	main(int ac, char **av)
{
	t_data	d;
	int		i;

	if (ac > 1)
	{
		i = 1;
		while (i < ac && solve(&d, av[i]))
			i++;
		if (i < ac)
			return (1);
	}
	else
		return (solve(&d, NULL));
	return (0);
}
