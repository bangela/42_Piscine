/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <bangela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 19:17:47 by bangela           #+#    #+#             */
/*   Updated: 2018/08/21 22:13:38 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_op.h"

int		ft_add(int a, int b)
{
	return (a + b);
}

int		ft_sub(int a, int b)
{
	return (a - b);
}

int		ft_mult(int a, int b)
{
	return (a * b);
}

int		ft_div(int a, int b)
{
	if (b == 0)
		write(1, "Stop : division by zero", 23);
	else
		return (a / b);
	return (0);
}

int		ft_mod(int a, int b)
{
	if (b == 0)
		write(1, "Stop : modulo by zero", 21);
	else
		return (a % b);
	return (0);
}
