/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:45:01 by gorodrig          #+#    #+#             */
/*   Updated: 2024/02/18 17:45:08 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_col_up(int board[4][4], int col, int num)
{
	int	index;
	int	max;
	int	count;

	index = 0;
	count = 1;
	max = board[index][col];
	while (index < 4)
	{
		if (board[index][col] > max)
		{
			max = board[index][col];
			count++;
		}
		index++;
	}
	if (count == num)
		return (1);
	return (0);
}

int	check_col_down(int board[4][4], int col, int num)
{
	int	index;
	int	max;
	int	count;

	index = 3;
	count = 1;
	max = board[index][col];
	while (index >= 0)
	{
		if (board[index][col] > max)
		{
			max = board[index][col];
			count++;
		}
		index--;
	}
	if (count == num)
		return (1);
	return (0);
}

int	check_row_left(int board[4][4], int row, int num)
{
	int	index;
	int	max;
	int	count;

	index = 0;
	count = 1;
	max = board[row][index];
	while (index < 4)
	{
		if (board[row][index] > max)
		{
			max = board[row][index];
			count++;
		}
		index++;
	}
	if (count == num)
		return (1);
	return (0);
}

int	check_row_right(int board[4][4], int row, int num)
{
	int	index;
	int	count;
	int	max;

	index = 3;
	count = 1;
	max = board[row][index];
	while (index >= 0)
	{
		if (board[row][index] > max)
		{
			max = board[row][index];
			count++;
		}
		index--;
	}
	if (count == num)
		return (1);
	return (0);
}

int	check_board(int board[4][4], int *input)
{
	int	index;

	index = 0;
	while (input[index])
	{
		if (index >= 0 && index <= 3)
			if (!check_col_up(board, index, input[index]))
				return (0);
		if (index >= 4 && index <= 7)
			if (!check_col_down(board, index - 4, input[index]))
				return (0);
		if (index >= 8 && index <= 11)
			if (!check_row_left(board, index - 8, input[index]))
				return (0);
		if (index >= 12 && index <= 15)
			if (!check_row_right(board, index - 12, input[index]))
				return (0);
		index++;
	}
	return (1);
}
