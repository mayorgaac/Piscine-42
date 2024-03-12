/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:27:50 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/25 20:44:09 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	divisor;

	divisor = 2;
	if (nb < 2)
		return (0);
	while (divisor <= nb / divisor)
	{
		if (nb % divisor == 0)
			return (0);
		divisor++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_find_next_prime(2147483647));
	printf("%d\n", ft_find_next_prime(-256));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(7));
	printf("%d\n", ft_find_next_prime(33));
	printf("%d\n", ft_find_next_prime(2426544));
	return 0;

}*/
