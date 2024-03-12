/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:02:00 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/15 18:50:44 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	out;

	out = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			out = 1;
		}
		else
		{
			return (0);
		}
		str++;
	}
	return (out);
}
