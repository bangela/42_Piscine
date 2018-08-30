/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <bangela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 13:51:55 by bangela           #+#    #+#             */
/*   Updated: 2018/08/30 18:16:53 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#include "alg.h"

void	ft_putchar(char c, int i)
{
	write(i, &c, 1);
}

void	ft_putstr(char *str, int fd)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i], fd);
		i++;
	}
}

int main( int argc, char **argv)
{
	char	a;
	int		fd;
	int		i;

	i = 1;
	if (argc == 1)
		ft_putchar(a, 1);
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if ( fd != -1)
			while (read(fd, &a, 1) != 0)
				ft_putchar(a, 1);
		replace(A, m, n);
		//print(A);
		//free_mem(A);
		close(fd);
		write(1,"\n", 1);
		i++;
	}
	return 0;
}

