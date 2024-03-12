/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 22:17:32 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/26 22:19:29 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./BSQ.h"

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_pser(char *str)
{
	(void)!write(2, str, ft_strlen(str));
	return (0);
}

static int	ft_strcpy(char *dst, const char *src, const size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}

char	*ft_strjoin_bsq(char *s1, const size_t size1,
		char *s2, const size_t size2)
{
	char	*res;

	res = (char *)malloc(sizeof(char) * (size1 + size2 + 1));
	if (!res)
		return (NULL);
	ft_strcpy(res, s1, size1);
	ft_strcpy(&res[size1], s2, size2);
	free(s1);
	return (res);
}

void    free_matrix(unsigned short **matrix, t_data *data)
{
    unsigned int    i;

    i = 0;
    while (i < data->nbr_lines)
    {
        free(matrix[i]);
        i++;
    }
    if (data->len_lines != 0)
        free(matrix);
}

unsigned short    **free_matrix_i(unsigned short **matrix, int i)
{
    while (--i >= 0)
        free(matrix[i]);
    free(matrix);
    return (NULL);
}
