/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:46:56 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/08 19:15:19 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c_caracter;

	c_caracter = 'a';
	while (c_caracter <= 'z')
	{
		write(1, &c_caracter, 1);
		c_caracter++ ;
	}
}
