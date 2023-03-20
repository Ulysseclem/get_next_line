/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:46:10 by uclement          #+#    #+#             */
/*   Updated: 2023/03/20 14:07:22 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_read()
{
	char *str = (char *) calloc(100, sizeof(char));
	int	bit;
	int i;
	int fd = 3;

	i = 0;
	bit = 15;
	read(fd, str, bit);
	printf("fd 1=%d\n",fd);

	while (str[i] != '\n'&& str[i])
		i++;
	// printf("i=%d\n",i);
	read(++fd, str, i);
		printf("fd 2=%d\n",fd);


	// printf("called read(%d, c, 10). returned that %d bytes were read.\n", fd, sz);
	str[i] = '\0';
	printf("Those bytes are as follows: %s\n", str);
	return (bit);
}

int main()
{
	int fd;
	
	fd = open("foo.txt", O_RDONLY| O_CREAT);
	ft_read();
	ft_read();
	ft_read();

}