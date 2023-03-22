/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:46:19 by uclement          #+#    #+#             */
/*   Updated: 2023/03/22 16:23:54 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h> //to remove
# include <stdlib.h>

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
# endif

typedef struct	s_list
{
	char			*content;
	struct s_list	*next;
}			t_list;

char *get_next_line(int fd);

#endif