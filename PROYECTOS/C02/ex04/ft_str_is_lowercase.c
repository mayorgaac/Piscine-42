/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:03:47 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/15 18:52:24 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	out;

	out = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
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
