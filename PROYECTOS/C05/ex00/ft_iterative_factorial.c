/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:46:27 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/24 20:03:36 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	output;

	output = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		output = output * nb;
		nb--;
	}
	return (output);
}

/*#include <stdio.h>

int main()
{
	printf("%d", ft_iterative_factorial(5));
	printf("%s", "\n");
	printf("%d", ft_iterative_factorial(12345));
	printf("%s", "\n");
	printf("%d", ft_iterative_factorial(-5));
	printf("%s", "\n");
	printf("%d", ft_iterative_factorial(0));
	printf("%s", "\n");
	return (0);
}*/
