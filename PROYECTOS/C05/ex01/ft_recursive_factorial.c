/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:32:51 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/24 20:04:46 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}

/*#include <stdio.h>

int main()
{
	printf("%d", ft_recursive_factorial(5));
	printf("%s", "\n");
	printf("%d", ft_recursive_factorial(12345));
	printf("%s", "\n");
	printf("%d", ft_recursive_factorial(-5));
	printf("%s", "\n");
	printf("%d", ft_recursive_factorial(0));
	printf("%s", "\n");
	return (0);
}*/
