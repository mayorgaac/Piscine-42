/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 00:03:32 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/27 00:28:21 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./BSQ.h"

static int	read_big_map(t_data *d, int fd, size_t buffer_size, size_t size)
{
	char	*buffer;
	ssize_t	ret;

	buffer = (char *)malloc(sizeof(char) * buffer_size + 1);
	if (!buffer)
		return (ft_pser("Error: Malloc failed\n"));
	ret = read(fd, buffer, buffer_size);
	buffer[ret] = '\0';
	while (ret != 0 && ret != EOF)
	{
		d->map = ft_strjoin_bsq(d->map, size, buffer, buffer_size);
		if (!d->map)
			return (ft_pser("Error: Malloc failed\n"));
		size += ret;
		ret = read(fd, buffer, buffer_size);
		buffer[ret] = '\0';
	}
	free(buffer);
	return (1);
}

static int	read_map(t_data *d, int fd, size_t buffer_size)
{
	ssize_t		ret;

	d->map = (char *)malloc(sizeof(char) * BUFFER_INIT + 1);
	if (!d->map)
		return (ft_pser("Error: Malloc failed\n"));
	ret = read(fd, d->map, BUFFER_INIT);
	d->map[ret] = '\0';
	if (ret != 0 && ret != EOF)
		if (!read_big_map(d, fd, buffer_size, ret))
			return (0);
	return (1);
}

int	map_arg(t_data *d)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	while (d->map[i] && d->map[i] != '\n')
		i++;
	if (!d->map[i] || !d->map[i + 1])
		return (ft_pser("Error: map error\t(file need more than one line)\n"));
	d->n = i + 1;
	d->filler = d->map[--i];
	d->obstacle = d->map[--i];
	d->empty = d->map[--i];
	if (d->empty == d->filler || d->empty == d->obstacle
		|| d->filler == d->obstacle)
		return (ft_pser("Error: map error\t(map char can't be the same)\n"));
	x = 0;
	d->nbr_lines = 0;
	while (x < i)
	{
		if (d->map[x] > '9' || d->map[x] < '0')
			return (ft_pser("Error: map error\t(nbr_lines isn't a number)\n"));
		d->nbr_lines = d->nbr_lines * 10 + d->map[x++] - '0';
	}
	return (1);
}

int	read_len_lines(t_data *d)
{
	unsigned int	i;

	if (d->nbr_lines == 0)
		return (ft_pser("Error: map error\t(nbr_lines can't be equal to 0)\n"));
	i = d->n;
	while (d->map[i] && d->map[i] != '\n')
		i++;
	d->len_lines = i - d->n;
	if (d->len_lines == 0)
		return (ft_pser("Error: map error\t(len_lines can't be equal to 0)\n"));
	return (1);
}

int    read_stdin(t_data *d)
{
    if (!read_map(d, 0, BUFFER_STDIN))
        return (0);
    if (!map_arg(d) || !read_len_lines(d))
        return (0);
    return (1);
}


int    read_file(t_data *d, char *file)
{
    d->map = NULL;
    d->fd = open(file, O_RDONLY);
    if (d->fd < 0)
        return (ft_pser("Error: Open failed\n"));
    if (!read_map(d, d->fd, BUFFER_SIZE))
    {
        close(d->fd);
        return (0);
    }
    close(d->fd);
    if (!map_arg(d) || !read_len_lines(d))
        return (0);
    return (1);
}
