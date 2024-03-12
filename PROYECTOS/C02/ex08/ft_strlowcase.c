/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:01:11 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/15 19:14:47 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	isuppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	salto;
	int	c;

	salto = 'A' - 'a';
	c = 0;
	while (str[c] != '\0')
	{
		if (isuppercase(str[c]) == 1)
		{
			str[c] = str[c] - salto;
		}
		c++;
	}
	return (str);
}
