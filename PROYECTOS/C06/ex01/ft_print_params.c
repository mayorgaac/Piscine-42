/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:03:04 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/22 21:13:35 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_string(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	int	c;

	c = 1;
	while (argc > c)
	{
		print_string(argv[c]);
		write(1, "\n", 1);
		c++;
	}
	return (0);
}
