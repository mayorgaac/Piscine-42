/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 20:31:56 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/24 20:08:17 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	output;

	output = 1;
	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		output = output * nb;
		power--;
	}
	return (output);
}

/*#include <stdio.h>

int main()
{
	printf("%d", ft_iterative_power(5,3));
	printf("%s", "\n");
	printf("%d", ft_iterative_power(5,0));
	printf("%s", "\n");
	printf("%d", ft_iterative_power(0,0));
	printf("%s", "\n");
	printf("%d", ft_iterative_power(-2,3));
	printf("%s", "\n");
	printf("%d", ft_iterative_power(0,3));
	printf("%s", "\n");
	return (0);
}*/
