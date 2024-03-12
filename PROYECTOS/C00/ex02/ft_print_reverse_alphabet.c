/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:22:41 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/08 19:31:39 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c_caracter;

	c_caracter = 'z';
	while (c_caracter >= 'a')
	{
		write(1, &c_caracter, 1);
		c_caracter-- ;
	}
}
