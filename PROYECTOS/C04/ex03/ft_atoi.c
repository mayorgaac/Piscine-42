/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 22:50:31 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/20 19:18:55 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	signo(char *str, int *c_signo, int *index)
{
	while (str[*index] == '-' || str[*index] == '+')
	{
		if (str[*index] == '-')
			(*c_signo)++;
		(*index)++;
	}
}

int	ft_atoi(char *str)
{
	int	c_signo;
	int	index;
	int	output;

	c_signo = 0;
	index = 0;
	output = 0;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
		index++;
	signo(str, &c_signo, &index);
	while (str[index] >= '0' && str[index] <= '9')
	{
		output = output * 10 + (str[index] - '0');
		index++;
	}
	if (c_signo % 2 != 0)
		output = -output;
	return (output);
}
