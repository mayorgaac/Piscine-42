/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beortiz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:38:57 by beortiz           #+#    #+#             */
/*   Updated: 2024/02/11 18:26:02 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	main(void)
{
	rush(-5, 5);
	rush (0, 0);
	rush (5, 6);
	rush (1, 1);
	rush (5, 1);
	rush (1, 5);
	return (0);
}
