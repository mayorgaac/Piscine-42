/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 22:07:49 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/25 20:41:06 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	root = 1;
	while (root <= nb / root)
	{
		if (root * root == nb)
			return (root);
		root++;
	}
	return (0);
}

#include <stdio.h>

int main()
{
	printf("%d", ft_sqrt(4));
	printf("%s", "\n");
	printf("%d", ft_sqrt(284));
	printf("%s", "\n");
	printf("%d", ft_sqrt(0));
	printf("%s", "\n");
	printf("%d", ft_sqrt(-4));
	printf("%s", "\n");
	printf("%d", ft_sqrt(2147483647));
	printf("%s", "\n");
	return 0;
}
