/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:58:24 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/25 20:22:27 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len_str(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int	len_strs(char **str)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (str[i] != NULL)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	str = (char *)malloc((len_strs(strs) + (len_str(sep) * (size - 1))) + 1);
	if (size <= 0)
		str = NULL;
	if (str == NULL)
		return (str);
	i = 0;
	k = 0;
	while (i < size && strs[i] != NULL)
	{
		j = 0;
		while (strs[i][j] != '\0')
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 2)
			str[k++] = sep[j++];
		i++;
	}
	str[k] = '\0';
	return (str);
}

/*int	main(void)
{
	char	*tab[5] ;
	tab[0] = "12";
	tab[1] = "12";
	tab[2] = "12";
	tab[3] = "12";
	tab[4] = NULL ;

	printf("%s", ft_strjoin(5, tab, "-"));
//	printf("%d", len_str(tab[1])); 
	return (0);
}*/
