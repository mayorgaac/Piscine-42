/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:19:15 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/25 21:00:56 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_string(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0' && s1[c] == s2[c])
	{
		c++;
	}
	return (s1[c] - s2[c]);
}

int	main(int argc, char *argv[])
{
	int		i_args1;
	int		i_args2;
	char	*temp;

	i_args1 = 1;
	while (i_args1 < argc)
	{
		i_args2 = i_args1 + 1;
		while (i_args2 < argc)
		{
			if (ft_strcmp(argv[i_args1], argv[i_args2]) > 0)
			{
				temp = argv[i_args1];
				argv[i_args1] = argv[i_args2];
				argv[i_args2] = temp;
			}
			i_args2++;
		}
		i_args1++;
	}
	i_args1 = 1;
	while (argv[i_args1])
		print_string(argv[i_args1++]);
	return (0);
}
