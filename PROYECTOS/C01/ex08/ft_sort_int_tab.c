/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:34:38 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/12 19:25:03 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	c1;
	int	c2;
	int	temp;

	c1 = 0;
	while (c1 < size)
	{
		c2 = c1 + 1;
		while (c2 < size)
		{
			if (tab[c1] > tab[c2])
			{
				temp = tab[c1];
				tab[c1] = tab[c2];
				tab[c2] = temp ;
			}
			c2++;
		}
		c1++;
	}
}
