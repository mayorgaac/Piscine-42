/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_safe.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:43:56 by gorodrig          #+#    #+#             */
/*   Updated: 2024/02/18 17:44:22 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	look_for_0(int board[4][4], int *row, int *col)
{
	*row = 0;
	while (*row < 4)
	{
		*col = 0;
		while (*col < 4)
		{
			if (board[*row][*col] == 0)
				return (1);
			*col = *col + 1;
		}
		*row = *row + 1;
	}
	return (0);
}

int	safe_col(int board[4][4], int col, int num)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (board[row][col] == num)
			return (0);
		row++;
	}
	return (1);
}

int	safe_row(int board[4][4], int row, int num)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (board[row][col] == num)
			return (0);
		col++;
	}
	return (1);
}

int	check_safe_num(int board[4][4], int row, int col, int num)
{
	if ((board[row][col] == 0) &&
		(safe_row(board, row, num)) && (safe_col(board, col, num)))
		return (1);
	return (0);
}
