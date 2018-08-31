/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <bangela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 13:51:55 by bangela           #+#    #+#             */
/*   Updated: 2018/08/31 16:09:30 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alg.h"

int main( int argc, char **argv)
{
	int		fd;
	int		i;
	int **a;
	int **t;
	t_char ch;

	i = 1;
	if (argc == 1)
		ft_putchar('\n', 1);
	while (i < argc)
	{	
		if (error(argv[i], &ch, &fd) == -1)
		{
			i++;
			continue ;
		}
	   	a = read_bsq(fd, (ch.row), (ch.col), ch);
		t = alloc_mem((ch.row),(ch.col));
		maxsq(a, (ch.row), (ch.col), t);
		print_bsq(a, (ch.row), (ch.col), ch);	
		i++;
	}
	return 0;
}

