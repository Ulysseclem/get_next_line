/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:46:07 by uclement          #+#    #+#             */
/*   Updated: 2023/03/20 16:28:35 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_read()
{
	static char *stock;
	char *line;
	int i;
	int j;

	stock = (char *) calloc(100, sizeof(char));
	i = 0;
	j = 0;
	while ( j != 5)
	{
		read(3, stock, 6);
			while (stock[i] != '\n' || stock[i])
					i++;
		printf("Those bytes are as follows: %s\n", stock);
		j++;
	}
	return (1);
}

int main()
{
	int fd;
	
	fd = open("foo.txt", O_RDONLY| O_CREAT);
	ft_read();
	ft_read();
	ft_read();
}