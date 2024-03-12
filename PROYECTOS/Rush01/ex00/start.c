/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:48:23 by gorodrig          #+#    #+#             */
/*   Updated: 2024/02/18 18:05:33 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	look_for_1(int board[4][4], int *input);

int		do_your_job(int board[4][4], int *input);

void	print_board(int board[4][4]);

int	check_sintax(char *input)
{
	int	c;
	int	error;

	c = 0;
	error = 0;
	while (input[c])
	{
		if (input[c] == '4')
			error++;
		c++;
	}
	if (error > 2)
		return (0);
	c = 0;
	error = 0;
	while (input[c])
	{
		if (input[c] == '1')
			error++;
		c++;
	}
	if (error != 4)
		return (0);
	return (1);
}

int	check_input(char *arg, int *input)
{
	int	ind;
	int	ind_out;

	ind = 0;
	ind_out = 0;
	if (check_sintax(arg) == 0)
		return (0);
	while (arg[ind])
	{
		if (((arg[ind] >= '1' && arg[ind] <= '4') && (arg[ind + 1] == ' '))
			|| ((arg[ind] >= '1' && arg[ind] <= '4')
				&& (arg[ind + 1] == '\0') && (arg[ind - 1] == ' ')))
			input[ind_out++] = arg[ind++] - '0';
		if ((arg[ind] == 9 || arg[ind] == 10) || arg[ind] == 32)
			ind++;
		else
			return (ind_out);
	}
	input[ind_out] = '\0';
	return (ind_out);
}

int	init_board(int *input)
{
	int	row;
	int	col;
	int	board[4][4];

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}
	look_for_1(board, input);
	if (do_your_job(board, input) == 1)
		print_board(board);
	else
		write(2, "ERROR: No hay solucion\n", 23);
	return (0);
}
