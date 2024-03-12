/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorodrig <gorodrig@student.42campus>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:46:47 by gorodrig          #+#    #+#             */
/*   Updated: 2024/02/18 18:06:19 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	init_board(int *input);

int	check_input(char *arg, int *input);

int	main(int argc, char *argv[])
{
	int	input[16];

	if (argc == 2)
	{
		if (check_input(argv[1], input) == 16)
			init_board(input);
		else
			write(2, "ERROR: Input invalido\n", 22);
	}
	else if (argc == 1)
	{
		write(2, "ERROR: Introduce un argumento.\n", 32);
	}
	else
	{
		write(2, "ERROR: Introduce un solo argumento.\n", 37);
	}
}
