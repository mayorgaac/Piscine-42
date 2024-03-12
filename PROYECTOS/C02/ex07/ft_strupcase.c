/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:41:23 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/15 19:06:46 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	islowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	salto;
	int	c;

	salto = 'A' - 'a';
	c = 0;
	while (str[c] != '\0')
	{
		if (islowercase(str[c]) == 1)
		{
			str[c] = str[c] + salto;
		}
		c++;
	}
	return (str);
}
