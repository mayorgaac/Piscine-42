/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:26:10 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/20 19:26:24 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *base)
{
	int		c;
	char	*temp;

	temp = base;
	c = 0;
	while (*temp)
	{
		c++;
		temp++;
	}
	return (c);
}

int	validaciones(char *base)
{
	int	i;
	int	j;

	if (base[0] != '\0' && base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		signo;
	int		longitud;
	char	output;

	if (validaciones(base) == 1)
	{
		if (nbr < 0)
		{
			signo = -1;
			write(1, "-", 1);
			nbr = -nbr;
		}
		longitud = len(base);
		if (nbr >= longitud)
		{
			ft_putnbr_base(nbr / longitud, base);
			ft_putnbr_base(nbr % longitud, base);
		}
		else
		{
			output = base[nbr % longitud];
			write(1, &output, 1);
		}
	}
}
