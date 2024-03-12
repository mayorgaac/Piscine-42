/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:03:06 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/12 19:24:25 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	contador;
	int	contador_rev;
	int	temp;	

	contador = 0;
	contador_rev = size - 1;
	while (contador < contador_rev)
	{
		temp = tab[contador];
		tab[contador] = tab[contador_rev];
		tab[contador_rev] = temp;
		contador++;
		contador_rev--;
	}
}
