/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <bangela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 20:18:53 by bangela           #+#    #+#             */
/*   Updated: 2018/08/21 22:07:12 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_op.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_no(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

int		ft_change(int nb)
{
	ft_putchar('-');
	return (-nb);
}

void	ft_putnbr(int nb)
{
	int no;

	if (nb == -2147483648)
		ft_no();
	else
	{
		if (nb == 0)
			ft_putchar('0');
		else
		{
			if (nb < 0)
			{
				no = ft_change(nb);
			}
			else
				no = nb;
			if (no > 9)
			{
				ft_putnbr(no / 10);
				ft_putchar((no % 10) + 48);
			}
			else
				ft_putchar((no % 10) + 48);
		}
	}
}

int		ft_atoi(char *str)
{
	int i;
	int no;
	int sign;

	i = 0;
	no = 0;
	sign = 1;
	if (str == NULL)
		return (0);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] < '0' && str[i] > '9')
		return (0);
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		no = no * 10 + (str[i] - 48);
		i++;
	}
	return (sign * no);
}
