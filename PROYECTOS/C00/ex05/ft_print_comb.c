/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 22:40:13 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/10 19:42:37 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_printint(int p, int d, int t)
{
	ft_putchar(p);
	ft_putchar(d);
	ft_putchar(t);
}

void	ft_print_comb(void)
{
	int	p;
	int	d;
	int	t;

	p = '0';
	d = '1';
	t = '2';
	while (p < ('7' + 1))
	{
		while (d < ('8' + 1))
		{
			while (t < ('9' + 1))
			{
				ft_printint(p, d, t);
				if (p < '7' || d < '8' || t < '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				t++;
			}
			t = ++d + 1;
		}
		d = ++p;
	}
}
