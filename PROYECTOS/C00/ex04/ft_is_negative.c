/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:20:04 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/08 20:44:15 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positive;
	char	negative;

	positive = 80;
	negative = 78;
	if (n > -1)
	{
		write(1, &positive, 1);
	}
	else
	{
		write(1, &negative, 1);
	}
}
