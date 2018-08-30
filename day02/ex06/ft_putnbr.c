/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <bangela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 10:14:47 by bangela           #+#    #+#             */
/*   Updated: 2018/08/09 19:20:14 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
