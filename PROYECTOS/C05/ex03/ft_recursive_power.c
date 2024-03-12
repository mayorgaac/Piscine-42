/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 20:58:15 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/24 20:08:44 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0 & nb == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, --power));
}

/*#include <stdio.h>

int main()
{
	printf("%d", ft_recursive_power(5,3));
	printf("%s", "\n");
	printf("%d", ft_recursive_power(5,0));
	printf("%s", "\n");
	printf("%d", ft_recursive_power(0,0));
	printf("%s", "\n");
	printf("%d", ft_recursive_power(-2,3));
	printf("%s", "\n");
	printf("%d", ft_recursive_power(0,3));
	printf("%s", "\n");
	return (0);
}*/
