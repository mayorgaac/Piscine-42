/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 21:23:19 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/24 20:09:07 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	else if (index <= 2)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*#include <stdio.h>

int main()
{
	printf("%d", ft_fibonacci(50));
	printf("%s", "\n");
	printf("%d", ft_fibonacci(0));
	printf("%s", "\n");
	printf("%d", ft_fibonacci(1));
	printf("%s", "\n");
	printf("%d", ft_fibonacci(-3));
	printf("%s", "\n");
	return 0;
}*/
