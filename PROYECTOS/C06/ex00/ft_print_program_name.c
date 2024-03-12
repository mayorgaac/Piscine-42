/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:53:24 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/24 16:24:12 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	index;

	index = 0;
	while (argv[0][index])
	{
		write(1, &argv[0][index], 1);
		index++;
	}
	write(1, "\n", 1);
	return (argc);
}
