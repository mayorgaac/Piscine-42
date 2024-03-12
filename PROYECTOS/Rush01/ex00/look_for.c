/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   look_for.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:02:05 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/18 17:46:17 by gorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	look_for_4_3(int board[4][4], int *input, int index)
{
	int	fill;

	fill = 4;
	while (input[index] != '\0' && index < 16)
	{
		if ((input[index] == 4) && (index >= 12 && index <= 15))
		{
			while (fill > 0)
			{
				board[index % 4][4 - fill] = fill;
				fill--;
			}
		}
		index++;
	}
}

void	look_for_4_2(int board[4][4], int *input, int index)
{
	int	fill;

	fill = 0;
	while (input[index] != '\0' && index < 12)
	{
		if ((input[index] == 4) && (index >= 8 && index <= 11))
		{
			while (fill < 4)
			{
				board[index % 4][fill] = fill + 1;
				fill++;
			}
		}
		index++;
	}
	look_for_4_3(board, input, index);
}

void	look_for_4_1(int board[4][4], int *input, int index)
{
	int	fill;

	fill = 4;
	while (input[index] != '\0' && index < 8)
	{
		if ((input[index] == 4) && (index >= 4 && index <= 7))
		{
			while (fill > 0)
			{
				board[4 - fill][index % 4] = fill;
				fill--;
			}
		}
		index++;
	}
	look_for_4_2(board, input, index);
}

void	look_for_4(int board[4][4], int *input)
{
	int	index;
	int	fill;

	index = 0;
	fill = 0;
	while (input[index] != '\0' && index < 4)
	{
		if ((input[index] == 4) && (index >= 0 && index <= 3))
		{
			while (fill < 4)
			{
				board[fill][index] = fill + 1;
				fill++;
			}
		}
		index++;
	}
	look_for_4_1(board, input, index);
}

void	look_for_1(int board[4][4], int *input)
{
	int	index;

	index = 0;
	while (input[index] != '\0' && index < 16)
	{
		if (((input[index] == 1) && (index >= 0 && index <= 3)))
			board[0][index] = 4;
		if (((input[index] == 1) && (index >= 4 && index <= 7)))
			board[3][index - 4] = 4;
		if (((input[index] == 1) && (index >= 8 && index <= 11)))
			board[index - 8][0] = 4;
		if (((input[index] == 1) && (index >= 12 && index <= 15)))
			board[index - 12][3] = 4;
		index++;
	}
	look_for_4(board, input);
}
