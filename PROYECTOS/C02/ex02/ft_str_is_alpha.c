/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:01:05 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/15 18:46:14 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	out;

	out = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			out = 1;
		}
		else if (*str >= 'a' && *str <= 'z')
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
