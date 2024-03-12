/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 13:58:10 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/25 20:18:26 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*range_aux;
	int	i;

	range_aux = range[0];
	if (min >= max)
	{
		range_aux = NULL;
		return (0);
	}
	size = max - min;
	range_aux = (int *)malloc(size * 4);
	if (range_aux == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		range_aux[i] = min;
		i++;
		min++;
	}
	range_aux[i] = 0;
	return (size);
}

/*#include <stdio.h>

int main()
{
	int range[6];
	int *range_p = &range[0];
	int **range_p_p = &range_p;
	int size = ft_ultimate_range(range_p_p, 5, 10);
	printf("size :%d\n", size);
	int i = 0 ;
	while (range_p_p[i])
	{
		printf("%d\n", *range_p_p[i]);
		i++;
	}
	printf("%d", size);
	return 0;
}*/
