/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:44:17 by amayorga          #+#    #+#             */
/*   Updated: 2024/02/26 20:32:36 by amayorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE	100000000
# endif

# define BUFFER_INIT	4096
# define BUFFER_STDIN	280000

# ifndef DEBUG
#  define DEBUG			0
# endif

# ifndef PRINT
#  define PRINT			0
# endif

typedef struct s_data
{
	char 			*map;
	char 			empty;
	char 			obstacle;
	char 			filler;
	unsigned int 	nbr_lines;
	unsigned int 	len_lines;
	unsigned int 	bsq_x;
	unsigned int 	bsq_y;
	unsigned long 	n;
	int 			fd;
} 					t_data;

//init.c
void	init_data(t_data *d);
unsigned short **init_matrix(t_data *d);
//read.c
int map_arg(t_data *d);
int read_len_lines(t_data *d);
int read_stdin(t_data *d);
int read_file(t_data *d, char *file);
//utils.c
int ft_pser(char *str);
char *ft_strjoin_bsq(char *s1, const size_t size1, char *s2, const size_t size2);
void    free_matrix(unsigned short **matrix, t_data *data);
unsigned short  **free_matrix_i(unsigned short **matrix, int i);
//process.c
int process(t_data *d, unsigned short **matrix);
//display.c
void    display_bsq(t_data *d, unsigned short **matrix);

#endif
