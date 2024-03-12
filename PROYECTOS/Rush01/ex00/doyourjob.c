/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doyourjob.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:45:46 by gorodrig          #+#    #+#             */
/*   Updated: 2024/02/18 18:04:59 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		look_for_0(int board[4][4], int *row, int *col);

int		check_board(int board[4][4], int *input);

int		check_safe_num(int board[4][4], int row, int col, int num);

void	print_board(int board[4][4]);

int	do_your_job(int board[4][4], int *input)
{
	int	row;
	int	col;
	int	num;

	num = 1;
	if (look_for_0(board, &row, &col) == 0 && check_board(board, input) == 1)
		return (1);
	while (num <= 4)
	{
		if (check_safe_num(board, row, col, num))
		{
			board[row][col] = num;
			if (do_your_job(board, input) == 1)
				return (1);
			board[row][col] = 0;
		}
		num++;
	}
	return (0);
}
