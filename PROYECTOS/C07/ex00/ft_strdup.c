/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:25:48 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/25 20:25:07 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*temp_dest;

	dest = (char *)malloc(len(src) + 1);
	if (dest == NULL)
		return (NULL);
	temp_dest = dest;
	while (*src)
	{
		*temp_dest = *src;
		temp_dest++;
		src++;
	}
	*temp_dest = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	char str1[] = "Hola Mundo";
	char *str_copy = ft_strdup(str1);
	printf("%s", str_copy);

	return 0;
}*/
