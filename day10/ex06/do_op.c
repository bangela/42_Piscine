/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 18:05:03 by bangela           #+#    #+#             */
/*   Updated: 2018/08/21 22:15:28 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_op.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	int		d;
	char	c;

	d = 0;
	c = *argv[2];
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (argc == 4)
	{
		if (c == '+')
			d = ft_add(a, b);
		else if (c == '-')
			d = ft_sub(a, b);
		else if (c == '*')
			d = ft_mult(a, b);
		else if (c == '/')
			d = ft_div(a, b);
		else if (c == '%')
			d = ft_mod(a, b);
		ft_putnbr(d);
		return (0);
	}
}
