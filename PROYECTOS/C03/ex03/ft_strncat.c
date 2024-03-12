/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 23:21:23 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/18 19:34:32 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (*src != '\0' && c < nb)
	{
		dest[i++] = *src++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}
