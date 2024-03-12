/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 12:26:03 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/25 20:22:01 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*out;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	out = (int *)malloc((max - min) + 4);
	while (min < max)
	{
		out[i] = min;
		i++;
		min++;
	}
	out[i] = 0;
	return (out);
}

/*#include <stdio.h>

int main()
{
	int *range = ft_range(5,10);
	int i = 0;
	while (range[i])
	{
		printf("%d\n", range[i]);
		i++;
	}
	return 0;
}*/
