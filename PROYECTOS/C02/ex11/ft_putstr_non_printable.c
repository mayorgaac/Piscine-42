/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:53:07 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/15 19:27:20 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	char_to_hex(char character, char *hex_representation)
{
	const char	*hex_chars;
	int			first_digit;
	int			second_digit;

	hex_chars = "0123456789abcdef";
	hex_representation[0] = '\\';
	first_digit = (character >> 4) & 0xF;
	hex_representation[1] = hex_chars[first_digit];
	second_digit = character & 0xF;
	hex_representation[2] = hex_chars[second_digit];
	hex_representation[3] = '\0';
}

void	ft_putstr_non_printable(char *str)
{
	char	hex_representation[4];

	while (*str)
	{
		if (*str > 31 && *str < 127)
		{
			write(1, str, 1);
		}
		else
		{
			char_to_hex(*str, hex_representation);
			write(1, hex_representation, 3);
		}
		str++;
	}
}
