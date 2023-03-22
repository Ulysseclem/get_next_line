/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:46:10 by uclement          #+#    #+#             */
/*   Updated: 2023/03/22 16:34:52 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"


void	read_stock(int fd, t_list **stash)
{
	char	*buffer;
	int		count;

	count = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return;
	while (!is_newline(*stash) && count != 0)
	{
		count = read(fd, buffer, BUFFER_SIZE);
		buffer[count] = '\0';
	}
}

void	is_newline()
{
	
}

char	*get_next_line(int fd)
{
	static t_list	*stash = NULL;
	char			*line;

	/* test des erreurs potentiels*/
	if(fd <0 || BUFFER_SIZE < 0 || read(fd, &line, 0) < 0)
		return(NULL);

	line = NULL;
	// lire le fichier et le mettre dans la liste chainee
	
	read_stock(fd, &stash);
	
	// extract le stock vers le line
	// nettoyer le stash
	return(line);
}

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("tests/two_lines_with_nl", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		printf("%s", line);
		if (line == NULL)
			break ;
		free(line);
	}
	return (0);
}