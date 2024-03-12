/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 22:40:43 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/24 20:06:42 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	divisor;
	int	c;

	divisor = nb;
	c = 0;
	if (nb == 0 || nb == 1)
		return (0);
	while (divisor >= 1 && c < 3)
	{
		if (nb % divisor == 0)
			c++;
		divisor--;
	}
	if (c == 2)
		return (1);
	else
		return (0);
}
